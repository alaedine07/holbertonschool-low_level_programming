#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_normal - print list without infinite loop
 * @tmp: pointer to first node
 * @counter: number of elements
 * Return: number of elements
**/
size_t print_normal(listint_t *tmp, size_t counter)
{
	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		tmp = tmp->next;
		counter++;
	}
	return (counter);
}
/**
 * print_listint_safe - print list with infinite loop
 * @head: pointer to first node
 * Return: number of elements
 * using Floyd’s Cycle-Finding Algorithm
**/
size_t print_listint_safe(const listint_t *head)
{
	listint_t *fp, *sp, *tmp;
	size_t counter = 0;
	int v = 0;

	if (head == NULL)
	exit(98);
	fp = sp = (void *)head;
	while (fp && fp->next && fp->next->next)
	{
		fp = fp->next->next;
		sp = sp->next;
		if (fp == sp)
		{
			v = 1;
			break;
		}
	}
	fp = tmp = (void *)head;
	if (v)
	{
		while (fp != sp)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			counter++;
			tmp = tmp->next;
			if (tmp == sp)
			{
				fp = fp->next;
				sp = sp->next;
			}
		}
		printf("[%p] %d\n", (void *)tmp, tmp->n);
	}
	else
	{
		counter = print_normal(tmp, counter);
	}
	return (counter);
}
