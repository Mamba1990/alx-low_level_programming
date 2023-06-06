#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a given index of linked list
 * @head: pointer to the frist node to the linked list
 * @index: intger input
 *
 * Return: pointer to the wanted node  or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	for (i = 0; i != index; i++)
	{
		head = head->next;
	}
	return (head);
}

