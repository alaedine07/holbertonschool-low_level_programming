#include "holberton.h"
/**
* _memset - fills memory with a constant byte.
* @s: the memory area to print in
* @b: the constant to print
* @n: the num of bytes to fill
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{	/* s is pointing to a char type buffer so i need a char pointer */
	char *ptr = s;

	while (n-- > 0)
	{
		*ptr++ = b;
	}
	return (s);
}
