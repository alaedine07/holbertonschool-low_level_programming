#include "holberton.h"
/**
 * print_rev - print reverse
 * @s: number one
 * Return: void
*/
void print_rev(char *s)
{
	int i, j;

	i = 0;

	while (*(s + i) != 0)
	{
		i = i + 1;
	}
	for (j = i; j > 1; j--)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
}
