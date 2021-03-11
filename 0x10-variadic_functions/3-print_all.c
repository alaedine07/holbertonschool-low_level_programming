#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* pchar - prints a char for args
* @ap: the arg
* Return: void
*/
void pchar(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
/**
* pint - prints a int for args
* @ap: the arg
* Return: void
*/
void pint(va_list ap)
{
	printf("%i", va_arg(ap, int));
}
/**
* pfloat - prints a float for args
* @ap: the arg
* Return: void
*/
void pfloat(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
* pstring - prints a string for args
* @ap: the arg
* Return: void
*/
void pstring(va_list ap)
{
	printf("%s", va_arg(ap, char *));
}
/**
* print_all - prints args depending on separator
* @format: format specifier
* Return: void
*/
void print_all(const char * const format, ...)
{
	int i, j;

	op_t ops[] = {
		{'c', pchar},
		{'i', pint},
		{'f', pfloat},
		{'s', pstring},
		{0, NULL}
	};

	/* declaring argument pointer of type va_list */
	va_list ap;

	va_start(ap, format);
	i = 0;
	while (*(format + i) && format)
	{
		j = 0;
		while (j < 5)
		{
			if (ops[j].c == *(format + i))
			{
				ops[j].ptr_fn(ap);
				if (*(format + i + 1) != '\0')
				{
					printf(", ");
				}
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
