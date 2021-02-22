#include "holberton.h"
#include <stdio.h>
/**
* _strchr - fills memory with a constant byte.
* @s: the memory area to print in
* @c: the memore to copy from
* Return: result.
*/
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (s++);
	return (0);
}