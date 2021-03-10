#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - call the print elements
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function
 * Return: void
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size == 0 || array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
