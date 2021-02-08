#include "holberton.h"
/**
 * print_alphabet - entry point
 * display message new way
 * Return: Sucess
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
