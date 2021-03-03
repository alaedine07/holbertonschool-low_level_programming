#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a 2 dimentional array of integers.
 * @width: array width
 * @height: array height
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	/**
	 * 2-D array is actually a 1-D array where each element is a 1-D array,
	 * so *array will point to the first value of the first 1D array
	 * so **array will be pointing to a block of pointers
	 * which points to a 1D array
	 * check this: https://www.eskimo.com/~scs/cclass/int/sx9b.html
	 */
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{	/* now we fill every 1D array */
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{	/* if we get a NULL we must free the already alocated memory */
			for (k = 0; k < i; k++)
				free(array[k]);
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}