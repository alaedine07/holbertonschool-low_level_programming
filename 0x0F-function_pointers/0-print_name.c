#include <stdio.h>
/**
 * print_name - execute the function being sent
 * @name: name to print
 * @f: function
 * Return: void
 **/
void print_name(char *name, void (*f)(char *))
{
	f(name);
	return ();
}
