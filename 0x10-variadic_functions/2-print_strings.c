#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - print strings passed with a separator
 * @separator: seperate between numbers
 * @n: number of elements
 * Return: void
**/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *ch;

	va_start(ap, n);
	if (n != 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			ch = va_arg(ap, char *);
			if (ch == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", ch);
			}
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	ch = va_arg(ap, char *);
	printf("%s", ch);
	}
	printf("\n");
	va_end(ap);
}
