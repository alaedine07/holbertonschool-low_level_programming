#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - free a list
 * @head: header of list
 * Return: void
**/
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *tmp = head;

		head = head->next;
		free(tmp);
	}
}
