#include "holberton.h"
/**
 * print_square - square.
 * @size: number one
 * Return: void.
 */
void print_square(int size)
{	int i;

	if (size > 0)
	{
		for (i = 0; i <= size; i++)
		{
			_putchar(35);
		}
	}
	_putchar('\n');
}
