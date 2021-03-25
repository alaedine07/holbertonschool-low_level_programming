#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * find_listint_loop - Finds the loop in linked list
 * @head: a pointer to the head of the list.
 * Return: address where loop start or NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sp, *fp;

	if (head == NULL)
		return (NULL);
	sp = head->next;
	fp = head->next->next;
	while (fp)
	{
		if (sp == fp)
		{
			sp = head;
			while (sp != fp)
			{
				sp = sp->next;
				fp = fp->next;
			}
			return (sp);
		}
		sp = sp->next;
		fp = fp->next->next;
	}
	return (NULL);
}
