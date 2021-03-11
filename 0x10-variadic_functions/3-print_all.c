#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/*void print_char(char *str)
{
	printf("%c", str);
}
void print_int(char *str)
{
	printf("%i", str);
}
void print_float(char *str)
{
	printf("%f", str);
}
void print_string(char *str)
{
	printf("%s", str);
}
*/
void print_all(const char * const format, ...)
{
	int i, j;
	
	op_t ops[] = {
		{"c", pchar},
		{"i", pint},
		{"f", pfloat},
		{"s", pstring},
		{NULL, NULL}
	};
	
	typedef struct choice 
	{
		char c;
		void (*ptr_fn)(char *);
	} op_t; 
	/* declaring argument pointer of type va_list */
	va_list ap;
	va_start(ap, format);
	i = 0;
	while (*(format + i))
	{
		j = 0;
		while (j < 5)
		{
			if (choice[j].c == *(format + i))
			{
				printf("yes\n");
			}
		}
	}
	va_end(ap);
}
