#include "lists.h"

/**
 * sum_dlistint - returns sum of the data
 * of a doubly linked list
 *
 * @head: head
 * Return: sum of
 */
int sum_dlistint(dlistint_t *head)
{
	int s;

	s = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			s += head->n;
			head = head->next;
		}
	}

	return (s);
}
