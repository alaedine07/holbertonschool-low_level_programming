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
	int i = 0, allo = 0;

	if (min > max)
	{
		return (NULL);
	}
	/* +1 because the next loop start with 0 */
	allo = (max - min) + 1;
	p = malloc(allo * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < allo)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
