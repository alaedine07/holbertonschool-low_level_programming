#include "holberton.h"
#include <stdio.h>
/**
 * cap_string - capitalize string
 * @s: string
 * Return: string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (i == 0 && *(s + i + 1) >= 97 && *(s + i + 1) <= 122)
			*(s + i + 1) -= 32;
		if (*(s + i) == '\n'
			|| *(s + i) == '\t'
			|| *(s + i) == ' '
			|| *(s + i) == '.'
			|| *(s + i) == ';'
			|| *(s + i) == ','
			|| *(s + i) == '!'
			|| *(s + i) == '?'
			|| *(s + i) == '"'
			|| *(s + i) == '('
			|| *(s + i) == ')'
			|| *(s + i) == '{'
			|| *(s + i) == '}')
		{
			if (*(s + i + 1) >= 97 && *(s + i + 1) <= 122)
				*(s + i + 1) -= 32;
		}
		i++;
	}
	return (s);
}
