#include "lists.h"

/**
 * add_dnodeint - adds node at the beginning
 * of double list
 *
 * @head: head
 * @n: input
 * Return: pointer to the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nw;
	dlistint_t *hh;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->prev = NULL;
	hh = *head;

	if (hh != NULL)
	{
		while (hh->prev != NULL)
			hh = hh->prev;
	}

	nw->next = hh;

	if (hh != NULL)
		hh->prev = nw;

	*head = nw;

	return (nw);
}
