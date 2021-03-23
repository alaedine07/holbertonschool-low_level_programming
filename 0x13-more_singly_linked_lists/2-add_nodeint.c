#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - add new_node at beginning of a list
 * @head: header of list
 * @n: value to be added
 * Return: number of elements
**/
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* create a new node */
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	/* put the data in the new node */
	new_node->n = n;
	/* make the new node points to the head node */
	new_node->next = (*head);
	/* make the head points to the new node */
	*head = new_node;
	return (new_node);
}
