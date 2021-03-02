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
	int i, j;
	/**
	 * 2-D array is actually a 1-D array where each element is a 1-D array,
	 * so *array will point to the first value of the first 1D array
	 * so **array will be pointing to a block of pointers(each one is A 1D array)
	 */
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		array = malloc(height * sizeof(int *));
		if (array == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < height; i++)
			{	/* now we fill every 1D array */
				array[i] = malloc(width * sizeof(int));
				if (array[i] == NULL)
				{
					return (NULL);
				}
				else
				{
					for (j = 0; j < width; j++)
					{
						array[i][j] = 0;
					}
				}
		}
		return (array);
	}
}
