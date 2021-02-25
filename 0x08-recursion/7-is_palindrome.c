#include "holberton.h"
#include <stdio.h>
/**
* check - recursive string comparison
* @str: string
* @index: starting occurence
* @len: string length
* Return: int
*/
int check(char *str, int index, int len)
{
	if (*(str + index) != *(str + len))
	{
		return (0);
	}
	/* len and index are on the same char */
	if (index == len)
	{
		return (1);
	}
	check(str, index + 1, len - 1);
	return (1);
}
/**
* is_palindrome - entry point
* @s: string to check
* Return: int
*/
int is_palindrome(char *s)
{
	int n;
	/* an empty string is a palindrome */
	if (*s == '\0')
	{
		return (1);
	}
	/* get the length of the string s */
	else
	{
		n = 0;
		while (*(s + n) != '\0')
		{
		n++;
		}
	}
	return (check(s, 0, n - 1));
}
