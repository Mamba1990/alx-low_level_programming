#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements in the linked list listint_t
 * @h: pointer to the listint_t list
 *
 * Return: number of elmeent of listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t c;

	for (c = 0; h != NULL; h = h->next)
	{
		c++;
	}
	return (c);
}

