#include "lists.h"

/**
 * dlistint_len - returns the double linked list length
 * @h: head
 * Return: nodes' number
 */
size_t dlistint_len(const dlistint_t *h)
{
	int ct;

	ct = 0;

	if (h == NULL)
		return (ct);

	while (h->prev != NULL)
		h = h->prev;

	for ( ; h != NULL; ct++)
	{
		h = h->next;
	}

	return (ct);
}
