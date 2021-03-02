#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates 2 strings
 * @s1: pointer to string 1.
 * @s2: pointer to strin 2.
 * Return: string composed of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0;
	int size2 = 0;
	char *p;
	int i = 0;

	if (s1 != '\0')
	{
		while (s1[size1] != '\0')
		{
			size1++;
		}
	}
	if (s2 != '\0')
	{
		while (s2[size2] != '\0')
		{
			size2++;
		}
	}
	p = malloc(size2 + size1 + 1 * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < size1)
		{
			p[i] = s1[i];
			i++;
		}
		i = 0;
		while (i <= size2)
		{
			p[i + size1] = s2[i];
			i++;
		}
		return (p);
	}
}
