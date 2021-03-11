#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char sep = *separator;
	va_list ap;
	char *ch;

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
	}
	printf("%s\n", va_arg(ap, char *));
	va_end(ap);
}