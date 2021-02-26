#include "holberton.h"
/**
* _memcpy - fills memory with a constant byte.
* @dest: the memory area to print in
* @src: the memore to copy from
* @n: the num of bytes to copy
* Return: dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
