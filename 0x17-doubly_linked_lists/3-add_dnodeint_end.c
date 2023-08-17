#include "lists.h"

/**
 * add_dnodeint_end - adds  node at the end
 * of double lsit
 *
 * @head: head
 * @n: input
 * Return: pointer to the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *hh;
	dlistint_t *nw;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	hh = *head;

	if (hh != NULL)
	{
		while (hh->next != NULL)
			hh = hh->next;
		hh->next = nw;
	}
	else
	{
		*head = nw;
	}

	nw->prev = hh;

	return (nw);
}
