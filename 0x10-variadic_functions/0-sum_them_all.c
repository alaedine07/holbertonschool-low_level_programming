#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - sum all arguments
 * @n: number of elements
 * Return: sum
 **/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap;
	/* ap: arguments parameter points to the first argument */
	va_start(ap, n);
	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	for (i = 0; i < n; i++)
	{	/* access arguments by successive call to va_arg */
		sum = sum + va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
