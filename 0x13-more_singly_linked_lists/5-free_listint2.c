#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - free a list
 * @head: header of list
 * Return: void
**/
void free_listint2(listint_t **head)
{
	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		listint_t *tmp;

		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
}
