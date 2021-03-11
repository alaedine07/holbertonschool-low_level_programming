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
	char sep = *separator;
	va_list ap;
	char *ch;

	if (n != 0)
	{
		va_start(ap, n);
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
				printf("%c", sep);
			}
		printf("%s", va_arg(ap, char *));
		}
	}
	printf("\n");
	va_end(ap);
}
