#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <string.h>
#include <signal.h>
#define SUCCESS 1
#define FAILURE -1
extern char **environ;

/**
 * find_path - function that extacts the PATH variable.
 * @env: the environment variables.
 * Return: string that holds the environment variable PATH.
 */
char *find_path()
{
	char *path = "PATH=";
	int i, j;

	for (i = 0; environ[i] != NULL; i++)
	{
		for (j = 0; j < 5 ; j++)
		{
			if (path[j] != environ[i][j])
			{
				break;
			}
			if (j == 4)
			{
				return (environ[i]);
			}
		}
	}
	return (NULL);
}

/**
 * _strlen - returns the length of a string
 * @s: string to be measured
 * Return: length of string
 */
unsigned int _strlen(char *s)
{
	unsigned int len;

	len = 0;

	for (len = 0; s[len]; len++)
		;
	return (len);
}

/**
 * _print_env - print the env variable
 * @env: environment variables to print
 * Return: void
**/
void _print_env()
{
	int i = 0;

	while (*(environ + i))
	{
		write(1, *(environ + i), _strlen(*(environ + i)));
		write(1, "\n", 2);
		i++;
	}
}

void free_array(char **array)
{
	int i;
	for (i = 0; array[i]; i++)
	{
		free(array[i]);
	}
	free(array);
}

/**
 * _strncmp - compares two strings
 * @s1: first string, of two, to be compared in length
 * @s2: second string, of two, to be compared
 * Return: 0 on success, anything else is a failure
 */
int _strncmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

/**
 * check_builtins - check if the command is builtin
 * @command: first string in the array of chars
 * Return:	if the command is not a builtin return -1
 *			if the command is builtin return 1
 *			if the command is exit it will free input and command
 *			
**/
int check_builtins(char **command, char *input)
{
	if (_strncmp(command[0], "exit") == 0)
	{
		free_array(command);
		free(input);
		exit(69);
	}
	if (_strncmp(command[0], "env") == 0)
	{
		_print_env();
		return(SUCCESS);
	}
	return (FAILURE);
}

/**
 * split_input - function that splits string into array of string
 * @str: string being passed
 * @Delimiters: to separeate the str by.
 * Return:	array that hold the strings splitted
 *			this splits based on defined delimiters
*/
char **split_input(char *line, char *delim)
{
	int i;
	char **words_array;
	char *word;
	char *duplicated;
	int buffsize = 1024;

	duplicated = strdup(line);
	words_array = malloc(sizeof(char *) * buffsize);
	if (words_array == NULL)
		return (NULL);
	word = strtok(duplicated, delim);
	for (i = 0; word != NULL; i++)
	{
		words_array[i] = strdup(word);
		word = strtok(NULL, delim);
	}
	words_array[i] = NULL;
	free(duplicated);
	return (words_array);
}

char *generate_command(char *directory, char *command)
{
	int i = 0;
	int j = 0;
	int command_len = 0;
	int directory_len = 0;
	int total_len = 0;
	char *final_cmd = NULL;
	// allocate a space equal to len directory + len command
	// copy the directory and command adding a / between them
	// return the resutl as final_cmd
	command_len = strlen(command);
	directory_len = strlen(directory);
	total_len = directory_len + command_len + 2;
	final_cmd = malloc(sizeof(char) * total_len);
	while (j < total_len)
	{
		for (i = 0; i <= directory_len && directory[i] != '\0'; i++)
		{
			final_cmd[i] = directory[i];
			j++;
		}
		final_cmd[j] = '/';
		j++;
		for (i = 0; i <= command_len; i++)
		{
			final_cmd[j] = command[i];
			j++;
		}
	}
	return (final_cmd);	
}
/**
 * add_user_command - 1- adds the user command to the path
 * 2- check if the directory + command exist.
 * @cmd_line: the input command line.
 * @_path_splitted: PATH splitted by ':'.
 * Return: 1 if the command exist
*/
char *add_user_command(char *command, char **PATH_splitted)
{

	char *final_cmd = NULL;
	int i = 0;
	int exists_program = 0;
	struct stat st;
	// loop through each directory in path
	// concatenate the directory with the user input
	// check if the path generated exists and return it
	// if it doesn't exists return NULL
	while (PATH_splitted[i] != NULL)
	{
		final_cmd = generate_command(PATH_splitted[i], command);
		// printf("User command + directory : %s\n", final_cmd);
		i++;
		/* until here everything is fine about leaks */
		exists_program = stat(final_cmd, &st);
		if (exists_program == 0)
		{
			printf("yup this program exists here \n");
			return (final_cmd);
		}
		else
		{
			free(final_cmd);
		}
	}
	/* if no program is found return NULL */
	return (NULL);	
}

int _exec_me(char *program_path, char **command_splitted)
{
	//printf("I will execute this %s : %s\n", program_path, command_splitted[0]);
	/* until here everything is fine about leaks */
	if (fork() == 0)
	{
		if (execve(program_path, command_splitted, NULL) == -1)
		{
			perror("Error: ");
			exit(127);
		}
	}
	wait(NULL);
	return (SUCCESS);	
}

int check_path(char **command_splitted)
{
	char *PATH = NULL;
	char **PATH_splitted;
	char *program_path;
	int executed = 0;

	PATH = find_path();
	PATH_splitted = split_input(PATH + 5, ":");
	// printf("PATH variable is%s\n", PATH);
	// printf("PATH directory 1 = %s\n", PATH_splitted[0]);
	// printf("PATH directory 2  = %s\n", PATH_splitted[1]);
	/* until here everything is fine about leaks */
	program_path = add_user_command(command_splitted[0], PATH_splitted);
	if (program_path != NULL)
	{
		printf("found your Program PATH %s\n", program_path);
		/* until here everything is fine about leaks */
		// if the program path was foound execute it
		executed = _exec_me(program_path, command_splitted);
		if (executed == 1)
		{
			free(program_path);
			free_array(PATH_splitted);
			return (SUCCESS);
		}
	}
	free(program_path);
	free_array(PATH_splitted);
	return(FAILURE);
}

void handle_input(char *input)
{
	ssize_t len = 0;
	size_t size = 0;
	int cmd_count;
	char **command_splitted;
	int is_builtin;
	int is_in_path;
	
	len = getline(&input, &size, stdin);
	cmd_count++;
	/* check if we are dealing with ctrl + d or EOF */
	if (len == -1)
	{
		if (isatty(STDIN_FILENO))
		{
			printf("\n");
		}
	free(input);
	printf("\n");	
	exit(69);		
	}
	/* until here everything is fine about leaks */
	else
	{
		command_splitted = split_input(input, " \t\r\n");
		is_builtin = check_builtins(command_splitted, input);
		/* until here everything is fine about leaks */
		if (is_builtin == -1)
		{
			printf("not a builtin go check path\n");
			is_in_path = check_path(command_splitted);
			if (is_in_path == -1)
			{
				printf("program not found in PATH");
			}
		}
		free_array(command_splitted);
	}
	free(input);
}
/**
 * main - Entry point of the program.
 * @ac: The number of parameters passed to the executable file. In the case
 * this variable will not be used.
 * @av: The name of the program.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	char *input = NULL;
	while (1)
	{
		/* if input is coming from shell then print the promp */
		if (isatty(STDIN_FILENO))
		{
			printf("#cisfun$ ");
		}
		handle_input(input);
	}
	return (0);
}
