#include "holberton.h"
#include <stdio.h>
/**
* _strspn - fills memory with a constant byte.
* @s: the memory area to print in
* @accept: the memore to copy from
* Return: r.
*/
unsigned int _strspn(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; accept[j] != s[i]; j++)
	{
		if (accept[j] == '\0')
		{
			return (i);
		}
	}
}
	return (i);
}
