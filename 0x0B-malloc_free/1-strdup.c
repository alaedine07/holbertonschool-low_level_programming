#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - create an array with init
* @str: size of the array.
* Return: the array created
*/
char *_strdup(char *str)
{
	int size, i;
	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}
	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	/* size + 1 because i need to take the null byte terminator */
	str2 = malloc(size + 1 * sizeof(char));
	if (str2 == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			str2[i] = str[i];
		}
		return (str2);
	}
}