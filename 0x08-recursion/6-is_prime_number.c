#include "holberton.h"

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	if ( (n % (n - 1)) == 0 && (n - 1) != 1 )
	{
		return (0);
	}
	return is_prime_number(n - 1);
}

