#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - create an array with init
* @size: size of the array.
* @c: the char to init
* Return: the array created
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		str = malloc(size * sizeof(char));
		if (str == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				str[i] = c;
			}
		}
		return (str);
	}
}
