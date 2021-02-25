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
* _strlen_recursion - calculate length of string.
* @s: the string
* Return: int.
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
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
	n = _strlen_recursion(s);
	}
	return (check(s, 0, n - 1));
}
