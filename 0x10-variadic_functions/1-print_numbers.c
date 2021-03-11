#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers with a separator
 * @n: number of elements
 * @separator: separate between numbers
 * Return: void
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char sep = *separator;
	va_list ap;

	va_start(ap, n);
	if (sep == '\0')
	{
		sep = '\0';
	}
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(ap, int));
		printf("%c", sep);
	}
	printf("%d\n", va_arg(ap, int));
}
