#include "holberton.h"
/**
 * times_table - entry point
 * times table
 * Return: Void
 */
void times_table(void)
{
int i, j, r;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
	{
	r = i * j;
	if (r > 9)
	{
	_putchar(' ');
	_putchar((r / 10) + '0');
	_putchar((r % 10) + '0');
	}
	else
	{
	if (j != 0)
	{
	_putchar(' ');
	_putchar(' ');
	_putchar(r + '0');
	}
	if (j != 9)
	_putchar(',');
	}
	_putchar('\n');
	}
}
