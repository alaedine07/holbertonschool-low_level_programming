#include "holberton.h"
/**
 * times_table - entry point
 * times table
 * Return: Void
 */
void times_table()
{	
	int i, j, r;
	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;
			if ((i == 0) && (j != 9))
			{
				_putchar('0');
				_putchar(',');
				_putchar(' ');
			}
			else if ( (r < 10) && (i != 0))
			{
				_putchar(' ');
				_putchar(r + '0');
				_putchar(',');
			}
			else if ((r > 9) && (j != 9))
			{
				_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if ((r > 9) && (j == 9))
			{
				_putchar(' ');
				_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
				_putchar('\n');
			}
			else if ((r < 10) && (j == 9))
			{	
				_putchar(' ');
				_putchar(' ');
				_putchar(r + '0');
				_putchar('\n');
			}
		}
	}
}