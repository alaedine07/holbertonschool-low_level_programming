#include "holberton.h"
/**
* _strncpy - copie n bytes of a string
* @dest: The destination string
* @src: source string.
* @n: the num of char to cpy.
* Return: dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for ( ; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
