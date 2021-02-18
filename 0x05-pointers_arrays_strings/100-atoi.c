#include "holberton.h"
#include <stdio.h>
/**
* _atoi - string to int conversion.
* @s: the string to check
* Return: the integer
*/
int _atoi(char *s)
{
	unsigned int start, i, sign = 1, is_a_number, first_number, result = 0;

	first_number = 0;
	is_a_number = 0;
	i = 0;
	if (*s == '\0')
	{
		return (result);
	}
	while (is_a_number == 0)
	{
		if ((s[i] >= '0' && s[i] <= '9') && (*s != '\0'))
		{
			is_a_number = 1;
			first_number = i;
		}
		if (s[i] == '-')
		{
			sign = sign * -1;
			i = i + 1;
		}
		else
		i = i + 1;
	}
	start = first_number;
	while ((s[start] >= '0' && s[start] <= '9') && (*s != '\0'))
	{
		result = result * 10 + s[start] - '0';
		start++;
	}
	return (sign * result);
}
