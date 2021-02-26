#include "holberton.h"
/**
 * _isdigit - return true if upper
 * @c: number one
 * Return: value
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
		return (0);
}
