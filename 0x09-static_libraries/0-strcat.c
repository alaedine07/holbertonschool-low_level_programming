#include "holberton.h"
/**
* _strcat - concatinates two strings
* @dest: destination string
* @src: source string.
* Return: pointer to src.
*/
char *_strcat(char *dest, char *src)
{
	int i, j;
	/* get the length of dest */
	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	/* add from src to dest while there is no null byte */
	for (j = 0; *(src + j); j++)
	{
		*(dest + i + j) = *(src + j);
	}
	/* add the null byte */
	*(dest + i + j + 1) = '\0';

	return (dest);
}
