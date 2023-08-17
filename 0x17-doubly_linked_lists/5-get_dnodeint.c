#include "lists.h"

/**
 * get_dnodeint_at_index - displays the
 * nth node of a double linked list
 *
 * @head: head
 * @index: index
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int k;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	k = 0;

	for ( ; head != NULL; k++)
	{
		if (k == index)
			break;
		head = head->next;
	}

	return (head);
}
