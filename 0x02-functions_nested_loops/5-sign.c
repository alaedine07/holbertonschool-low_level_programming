#include "holberton.h"
/**
 * print_sign - check sign
 * @c : ascii int to check
 * Return: int
 *
 */
int print_sign(int c)
{	
	int r;
	
	if (c > 0)
	{	
		_putchar('+');
		r = 1;
	}
	else if (c < 0)
	{
		_putchar('-');
		r = -1;
	}
	else if (c == 0)
	{
		_putchar('0');
		r = 0;
	}
return (r);
} 