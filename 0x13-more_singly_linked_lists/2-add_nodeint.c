#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_nodeint - adds a new node at the end of a listint_t list.
 * @head: pointer to a  pointer to the lisintt_t list
 * @n: new integer to be add in the node
 *
 * Return: pointer to the new node added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
	{
		return (NULL);
	}
	new_n->n = n;
	new_n->next = (*head);
	(*head) = new_n;
	return (new_n);
}

