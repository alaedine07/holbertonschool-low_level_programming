#include "holberton.h"
/**
 * *_strcpy - copying from src to dest
 * @dest: destination variable
 * @src: source variable
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int size = 0;
	int i;
	/* get the length of the source variable */
	while (*(src + size) != 0)
	{
	size++;
	}
	for (i = 0; i <= size; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
