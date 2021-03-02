#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_grid - free allocated memory space by grid.
 * @grid: pointer to pointer to array.
 * @height: array height.
 */
char *argstostr(int ac, char **av)
{
	int i;
	char **array;
	
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/* allocate ac char pointers */
	array = malloc((ac) * sizeof(char *));
	/* I need to copy the arguments to allocated space */
	for (i = 1; i < ac; i++)
	{	
		/* +1 to get the null terminator when copying */
		array[i] = malloc(strlen(*av) + 1);
		strcpy(array[i], *av);
		av++;
	}
	array[i] = NULL;
	return (array);
}