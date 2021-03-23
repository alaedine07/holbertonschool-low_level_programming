#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print all elements of a list
 * @h: header of list
 * Return: number of elements
**/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
