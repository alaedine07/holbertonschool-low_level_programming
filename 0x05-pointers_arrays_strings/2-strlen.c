#include "holberton.h"
/**
 * _strlen - length of string
 * @s: number one
 * Return: int
*/
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		i = i + 1;
	}
	return (i);
}
