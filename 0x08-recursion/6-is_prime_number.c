#include "holberton.h"
/**
* verif - verification
* @n: starting number
* @i: n divided by 2
* Return: int
*/
int verif(int n, int i)
{
	if (i == 0)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (verif(n, i - 1));
	}
}
/**
* is_prime_number - entry point
* @n: starting number
* Return: int
*/
int is_prime_number(int n)
{
	if (n == 1)
	{
		return (1);
	}
	return (verif(n, n / 2));
}
