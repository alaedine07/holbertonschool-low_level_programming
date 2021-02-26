#include "holberton.h"
/**
 * _puts - print string
 * @str: number one
 * Return: void
*/
void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i = i + 1;
	}
	_putchar('\n');
}
