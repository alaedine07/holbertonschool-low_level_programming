#include "holberton.h"
#include <stdlib.h>
/**
 * *array_range - allocate memory and init with range
 * @min: param1
 * @max: param2
 * Return: int pointer
 **/
int *array_range(int min, int max)
{
	int *p;
	int i, allo;

	if (min > max)
	{
		return (NULL);
	}
	allo = (max - min) + 1;
	p = malloc(allo * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= allo; i++)
	{
		p[i] = min;
		min++;
	}

	return (p);
}
