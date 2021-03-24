#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - delete the first node
 * @head: header of list
 * @index: desired node
 * Return: pointer to desired node
**/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	if (index == 0)
	{
		return (head);
	}
	current_node = head;
	while (i != index && current_node != NULL)
	{
		current_node = current_node->next;
		i++;
	}
	return (current_node);
}
