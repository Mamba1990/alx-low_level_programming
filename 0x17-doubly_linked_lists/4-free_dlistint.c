#include "lists.h"

/**
 * free_dlistint - frees a double linked list
 *
 * @head: head
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((t = head) != NULL)
	{
		head = head->next;
		free(t);
	}
}
