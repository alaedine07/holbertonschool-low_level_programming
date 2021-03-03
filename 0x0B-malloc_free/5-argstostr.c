#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - seperate arguments
 * @ac: number of argument.
 * @av: arguments.
 * Return: pointer to string
 */
char *argstostr(int ac, char **av)
{
	int length = 0, i, j, c;
	char *p;

	if (ac == NULL || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{	/* for every argument given calculate it's length */
		for (j = 0; av[i][j] != '\0'; j++)
		{
			length++;
		}
	}
	/* allocates space to hold the number of given char */
	p = malloc((length + ac + 1) * sizeof(char));
	/**
	 * length is number of chars,
	 * ac to add NULL of each string and + 1 for last NULL
	 */
	if (p == NULL)
	{
		return (NULL);
	}
	c = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[c] = av[i][j];
			c++;
		}
		p[c] = '\n';
		c++;
	}
	p[c] = '\0';
	return (p);
}
