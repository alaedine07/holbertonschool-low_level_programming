#include "holberton.h"
/**
 * print_line - lines.
 * @n: number one
 * Return: void.
 */
void print_line(int n)
{
	int i;

	if ((n == 0) || (n < 0))
	{
		_putchar('\n');
	}
	else
	{
	for (i = 0; i <= n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
	}
}
