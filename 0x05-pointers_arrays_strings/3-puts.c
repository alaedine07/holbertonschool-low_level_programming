#include "holberton.h"
/**
 * _puts - print string
 * @str: number one
 * Return: void
*/
void _puts(char *str)
{
	char val;
	int i = 0;

	while (val != 0)
	{
		val = *(str + i);
		_putchar(val);
		i = i + 1;
	}
	_putchar('\n');
}
