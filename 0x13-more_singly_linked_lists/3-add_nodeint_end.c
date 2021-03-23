#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - add new_node at beginning of a list
 * @head: header of list
 * @n: value to be added
 * Return: number of elements
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* create a new node */
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current_node = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	/* the new node will be the end of our list */
	new_node->next = NULL;
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		/* incrementing to the last node of the list */
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node;
	}
	return (*head);
}
