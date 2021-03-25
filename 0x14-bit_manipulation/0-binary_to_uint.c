#include "holberton.h"
#include <stdlib.h>

/**
* _strlen - returns the length of a string.
* @s: parameter
* Return: Always 0.
**/
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
* binary_to_uint - convert binary to decimal.
* @b: string
* Return: result.
**/
unsigned int binary_to_uint(const char *b)
{
	int i, j;
	unsigned int result = 0;
	int len;

	if (b == NULL)
	{
		return (0);
	}
	len = _strlen(b);
	len = len - 1;
	j = 0;
	for (i = len; i >= 0; i--)
	{
		if (*(b + i) == '1')
		{
			result = result + (1 << j);
		}
		if (*(b + i) != '1' && *(b + i) != '0')
		{
			return (0);
		}
		j++;
	}
	return (result);
}
