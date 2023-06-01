#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in the linked list list_t
 * @h: pointer to the list_t list
 *
 * Return: number of elmeent of list_t
 */

size_t list_len(const list_t *h)
{
	size_t c;

	for (c = 0; h != NULL; h = h->next)
	{
		c++;
	}
	return (c);
}


