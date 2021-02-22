#include "holberton.h"
#include <stdio.h>
/**
* _strstr - fills memory with a constant byte.
* @s: the memory area to print in
* @accept: the memore to copy from
* Return: r.
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, k ,length_needle;

	/* get the length of the needle string */
	for (i = 0; *(needle + i); i++)
	{
		length_needle++;
	}
	while (*(haystack + j))
	{
		/*for (k = j; *(haystack + k) && k <= length_needle && *(haystack + k) == *(needle + k); k++)
		{
			haystack++;	
		}
		j++;*/
		i = 0;
		while (needle[i] == haystack[j] && haystack[j] != '\0')
		{
			
		}
	}

	return (haystack);
}