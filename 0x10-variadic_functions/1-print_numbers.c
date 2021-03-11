#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print numbers with a separator
 * @n: number of elements
 * @separator: separate between numbers
 * Return: void
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n != 0)
	{
		va_start(ap, n);
		for (i = 0; i < n - 1; i++)
		{
			printf("%d", va_arg(ap, int));
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
		printf("%d", va_arg(ap, int));
	}
	printf("\n");
	va_end(ap);
}
