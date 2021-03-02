#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free allocated memory space by grid.
 * @grid: pointer to pointer to array.
 * @height: array height.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
