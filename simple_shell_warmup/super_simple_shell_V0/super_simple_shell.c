#include "shell.h"
int check_builtins(char *command, char **envp);
/**
 * main - function that will initiate infinite input loop
 * @argc: number of arguments
 * @argv: array of arguments passed
 * @env: array of string hold the environment variables
 * Return:	check if the input is coming from terminal or not
 *			if the input is coming from terminal it will trigger
 *			an infinite while loop that take user input
**/
int main(int argc, char **argv, char **env)
{
	size_t n = 0;
	char *lineptr;
	char **cmd;
	ssize_t chars = 0;
	int is_builtin;

	(void)argv;
	(void)argc;
	while (chars != -1)
	{
		if (isatty(STDIN_FILENO))
		{
			printf("$ ");
		}
		chars = getline(&lineptr, &n, stdin);
		/* this if condition will remove the \n */
		if (lineptr[chars - 1] == '\n')
		{
			lineptr[chars - 1] = '\0';
			--chars;
		}
		cmd = split_input(lineptr);
		is_builtin = check_builtins(cmd[0], env);
		/* only fork and exec if the input is not a builtin command */
		if (is_builtin == -1)
		{
			if (fork() == 0)
			{
				if (execve(cmd[0], cmd, NULL) == -1)
				{
					perror("Error:");
				}
			}
			wait(NULL);
		}
	}
	printf("$ ");
}
