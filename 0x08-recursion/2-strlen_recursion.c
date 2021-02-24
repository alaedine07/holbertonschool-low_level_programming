#include "holberton.h"
/**
* _strlen_recursion - fills memory with a constant byte.
* @s: the memory area to print in
* Return: void.
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
