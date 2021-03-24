#include <stdlib.h>
#include "lists.h"
/**
 * linked_len - return number of elements in a list
 * @h: header of list
 * Return: number of elements
**/
size_t linked_len(listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
/**
 * delete_nodeint_at_index - delete node at an index
 * @head: header of list
 * @index: index where to insert
 * Return: true or false
**/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node;
	listint_t *tmp;
	unsigned int i = 0;
	unsigned int len;

	if (*head == NULL)
	{
		return (-1);
	}
	len = linked_len(*head);
	if (index > len)
	{
		return (-1);
	}
	current_node = *head;
	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}
	/* traverse the list until index - 1 */
	while (i != index - 1 && current_node != NULL)
	{
		current_node = current_node->next;
		i++;
	}
	tmp = current_node->next->next;
	free(current_node->next);
	current_node->next = tmp->next;
	return (1);
}
