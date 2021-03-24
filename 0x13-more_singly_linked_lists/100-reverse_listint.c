#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - delete node at an index
 * @head: header of list
 * Return: true or false
**/
listint_t *reverse_listint(listint_t **head)
{
	/* init 3 pointers */
	listint_t *prev = NULL;
	listint_t *next = NULL;

	if (head == NULL)
	{
		return (NULL);
	}
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
