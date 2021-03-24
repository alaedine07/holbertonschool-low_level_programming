#include <stdlib.h>
#include "lists.h"
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

	if (*head == NULL)
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
	if ((current_node == NULL) || (current_node->next == NULL))
	{
		return (-1);
	}
	if (i != index - 1)
	{
		return (-1);
	}
	tmp = current_node->next->next;
	free(current_node->next);
	current_node->next = tmp->next;
	return (1);
}
