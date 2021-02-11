#include "holberton.h"
/**
 * print_triangle - triangle.
 * @size: number one
 * Return: void.
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i <= size; i++)
		{
			for (j = 0; size - i; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; k++)
			{
				_putchar(35);
			}
		_putchar('\n');
		}
	}
}
