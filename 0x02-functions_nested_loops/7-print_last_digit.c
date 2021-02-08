#include "holberton.h"
/**
 * _abs - print abs version
 * @x : ascii int to check
 * Return: int
 *
 */
int print_last_digit(int x)
{	
	int last;
	
	last = x % 10;
	if (last < 0)
	{
		last = -last;
	}
	_putchar(last + '0');
	return last;
}
