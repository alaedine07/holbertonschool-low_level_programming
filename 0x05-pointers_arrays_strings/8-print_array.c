#include "holberton.h"
#include <stdio.h>
/**
 * print_array - printing table values
 * @a: pointer to table
 * @n: number of values to print
 * Return: void.
 */
void print_array(int *a, int n)
{	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d, ", *(a + i));
	}
	printf("%d\n", *(a + n));
}
