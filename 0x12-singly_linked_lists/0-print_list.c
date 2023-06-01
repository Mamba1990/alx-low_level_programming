#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of list_t
 * @h: pointer to  list_t
 *
 * Return: list_t's number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t c;

	c = 0;
	for ( ; h != NULL; c++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			 printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (c);
}

