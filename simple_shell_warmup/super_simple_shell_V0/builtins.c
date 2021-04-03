#include "shell.h"

int check_builtins(char *command, char **envp)
{
	int check = -1;
	(void)envp;
	if (strcmp(command,"exit") == 0)
	{
		exit(98);
	}
	return (check);
}