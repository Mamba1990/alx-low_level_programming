#include "lists.h"

/**
 * print_dlistint - prints the double list elements
 * @h: head
 * Return: nodes' number
 */
size_t print_dlistint(const dlistint_t *h)
{
	int ct;

	ct = 0;

	if (h == NULL)
		return (ct);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		ct++;
		h = h->next;
	}

	return (ct);
}
