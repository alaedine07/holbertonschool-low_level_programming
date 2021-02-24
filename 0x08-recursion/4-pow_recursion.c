#include "holberton.h"
/**
* _pow_recursion - print power of number
* @x: argument 1
* @y: argument 2
* Return: int
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (x == 0)
	{
		return (0);
	}
	return (x * _pow_recursion(x, y - 1));
}
