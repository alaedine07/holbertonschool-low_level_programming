#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_realloc - reallocate memory from previous
 * @old_size: param1
 * @new_size: param2
 * Return: void pointer
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{	
	/* the main is type casting ptr to char */
	char *allo;
	unsigned int i; 
	
	if (ptr == NULL)
	{
		allo = malloc(new_size);
		if (allo == NULL)
		{
			return (NULL);
		}
		free(ptr);
		return (allo);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	/* real deal */
	if (new_size < old_size)
	{
		return (ptr);
	}
	allo = malloc(new_size);
	if (allo == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size; i++)
	{
		allo[i] = ptr[i];
	}
	return (allo);
}
