#include "holberton.h"
#include <stdio.h>
void rev_string(char *s)
{
	char aux;
	int size = 0;
	int i;
	while (*(s + size) != 0)
	{
		size = size + 1;
	}
	i = 0;
	while (*(s + i) != 0)
	{
		aux = *(s + i);
		*(s + i) = *(s + size);
		*(s + size) = aux;
		i = i + 1;
		size = size - 1;

	}
}