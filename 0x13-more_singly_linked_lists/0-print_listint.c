#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of listint_t
 * @h: pointer to listint_t
 *
 * Return: listint_t's number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t c;
	/* unsigned int len = 0;*/

	for (c = 0; h != NULL; c++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (c);
}
