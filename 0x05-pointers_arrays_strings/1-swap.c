#include "holberton.h"
/**
 * swap_int - swap values
 * @a: number one
 * @b: number one
 * Return: void
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
