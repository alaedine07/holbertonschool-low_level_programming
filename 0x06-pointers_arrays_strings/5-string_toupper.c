#include "holberton.h"
/**
 * string_toupper - turn lower case to upper case
 * @s: string.
 * Return: string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\n')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) = *(s + i) - 32;
		}
		i++;
	}
	return (s);
}