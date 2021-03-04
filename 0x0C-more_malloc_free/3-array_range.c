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
	int i;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= (max - min + 1); i++)
	{
		if (i >= min)
		{
			p[i] = i;
		}
	}

	return (p);
}
