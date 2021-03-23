#include <stdio.h>
#include "lists.h"
/**
 * listint_len - return number of elements in a list
 * @h: header of list
 * Return: number of elements
**/
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
