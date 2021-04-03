#include "shell.h"
/**
 * main - function that will initiate infinite input loop
 * @argc: number of arguments
 * @argv: array of arguments passed
 * @env: array of string hold the environment variables
 * Return: trigger a while loop
**/
int main(int argc, char **argv, char **env)
{
	size_t n = 0;
	char *lineptr;
	char **cmd;
	ssize_t chars = 0;

	(void)argv;
	(void)argc;
	(void)env;
	while (chars != -1)
	{
		if (isatty(STDIN_FILENO))
		{
			printf("$ ");
		}
		chars = getline(&lineptr, &n, stdin);
		if (lineptr[chars - 1] == '\n')
		{
			lineptr[chars - 1] = '\0';
			--chars;
		}
		cmd = split_input(lineptr);
		if (fork() == 0)
		{
			if (execve(cmd[0], cmd, NULL) == -1)
			{
				perror("Error:");
			}
		}
		wait(NULL);
	}
	printf("$ ");
}
