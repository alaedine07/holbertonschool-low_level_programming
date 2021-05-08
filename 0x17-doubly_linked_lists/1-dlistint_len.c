#include "lists.h"
/**
 * dlistint_len - function that returns the number of
 * elements in a linked dlistint_t list.
 * @h: pointer to the first node
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t i = 0;
    
    if (h == NULL)
    {
        return (0);
    }
    while (h != NULL)
    {
        i++;
        h = h->next;
    }

    return (i);
}