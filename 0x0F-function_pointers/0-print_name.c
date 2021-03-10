#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - execute the function being sent
 * @name: name to print
 * @f: function
 * Return: void
 **/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
