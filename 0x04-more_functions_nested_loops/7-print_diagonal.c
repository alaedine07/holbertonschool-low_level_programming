#include "holberton.h"
/**
 * print_diagonal - diagonal.
 * @n: number one
 * Return: void.
 */
void print_diagonal(int n)
{	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(92);
		}
	}
	_putchar('\n');
}
