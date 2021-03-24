#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - delete the first node
 * @head: header of list
 * Return: void
**/
int pop_listint(listint_t **head)
{
	int x;
	listint_t *current_node;
	listint_t *to_delete;

	if (*head == NULL)
	{
		return (0);
	}
	current_node = *head;
	/* copy the address of first node */
	to_delete = *head;
	x = to_delete->n;
	/* move the head to the next node */
	current_node = current_node->next;
	*head = current_node;
	/* free the copied node */
	return (x);
}
