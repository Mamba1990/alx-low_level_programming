#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - removes a node in a linked list at a given index
 * @head: pointer to the first node of the list
 * @index: integer input
 *
 * Return: 1 or  -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t = *head;
	listint_t *node = NULL;
	unsigned int j = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(t);
		return (1);
	}

	for ( ; j < index - 1; j++)
	{
		if (!t || !(t->next))
		{
			return (-1);
		}
		t = t->next;
		j++;
	}
	node = t->next;
	t->next = node->next;
	free(node);
	return (1);
}

