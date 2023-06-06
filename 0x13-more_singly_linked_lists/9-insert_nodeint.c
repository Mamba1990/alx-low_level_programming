#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node in a given indext linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *t = *head;
	unsigned int i;
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));
	if (head == NULL || new_n == NULL)
	{
		return (NULL);
	}
	new_n->n = n;
	new_n->next = NULL;
	if (idx == 0)
	{
		new_n->next = *head;
		*head = new_n;
		return (new_n);
	}
	i = 0;
	while (t && i < idx)
	{
		if (i == idx - 1)
		{
			new_n->next = t->next;
			t->next = new_n;
			return (new_n);
		}

		else
		{
			t = t->next;
		}

		i++;
	}

	return (NULL);
}
