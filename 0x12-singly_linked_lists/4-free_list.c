#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * free_list - frees a list
 * @head: the head of the given list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *curr = head;

	while (curr)
	{
		list_t *aux = curr;

		curr = curr->next;
		free(aux);
	}
}
