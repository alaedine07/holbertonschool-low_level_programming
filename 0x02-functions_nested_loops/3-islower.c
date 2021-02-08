#include "holberton.h"
/**
 * _islower - return if lower
 * @c : ascii to check
 * Return: int
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
