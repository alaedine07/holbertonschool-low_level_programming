#include "holberton.h"
/**
 * puts_half - print the second part of the string
 * @str: the string to reverse
 * Return: void.
 */
void puts_half(char *str)
{
	int size = 0;
	int i;
	/* getting the whole length of string */
	while (*(str + size) != 0)
	{
		size++;
	}
	size = size - 1;
	for (i = (size / 2) + 1; i <= size; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
