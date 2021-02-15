#include "holberton.h"
/**
 * rev_string - reverse a string
 * @s: the string to reverse
 * Return: void.
 */
void rev_string(char *s)
{
	char *start_of_string, *end_of_string, aux;
	int i;
	int size = 0;
	/* both pointers are pointing to the string */
	start_of_string = s;
	end_of_string = s;
	/* calculating string length */
	while (*(s + size) != 0)
	{
		size++;
	}
	/* pushing the end_of string pointer to the end of the string */
	for (i = 0; i < size - 1; i++)
	{
		end_of_string++;
	}
	/* swapping we only need hal of the string*/
	for (i = 0; i < size / 2; i++)
	{
		aux = *end_of_string;
		*end_of_string = *start_of_string;
		*start_of_string = aux;
		/* decrementing and incrementing pointers to next char*/
		start_of_string++;
		end_of_string--;
	}
}
