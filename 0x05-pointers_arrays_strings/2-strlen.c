#include "holberton.h"
/**
 * _strlen - length of string
 * @s: number one
 * Return: int
*/
int _strlen(char *s)
{
	char val;
	int i = 0;

	while (val != 0)
	{
		i = i + 1;
		val = *(s + i);
	}
	return (i);
}
