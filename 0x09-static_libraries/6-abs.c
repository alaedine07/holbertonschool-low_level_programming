#include "holberton.h"
/**
 * _abs - compute absolute value of integer.
 * @x: type integer
 * Return: always 0.
 */
int _abs(int x)
{
	if (x < 0)
	{
		return (x * -1);
	}
	else
	{
		return (x);
	}
}
