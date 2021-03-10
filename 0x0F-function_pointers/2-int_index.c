#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - searches for an integer
 * @array: pointer to array
 * @size: the size of the array
 * @cmp: the comparison function
 * Return: the index of element that match, (-1) otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, check = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		check = (*cmp)(*(array + i));
		if (check == 1)
		{
			return (i);
		}
	}
	return (-1);
}
