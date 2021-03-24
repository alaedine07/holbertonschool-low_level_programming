#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at a given position
 * @head: header of list
 * @idx: index where to insert
 * @n: number to insert
 * Return: sum of elements
**/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_node;
	listint_t *new_node;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx == 0 || *head == NULL)
	{
		new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current_node = *head;
	while (i != idx - 1 && current_node != NULL)
	{
		current_node = current_node->next;
		i++;
	}
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
