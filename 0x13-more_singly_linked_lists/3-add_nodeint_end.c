#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to a  pointer to the listint_t list
 * @n: new integer to be added in the node
 *
 * Return: pointer to the new node added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n;
	listint_t *t = *head;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
	{
		return (NULL);
	}
	new_n->n = n;
	new_n->next = NULL;
	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}
	while (t->next != NULL)
	{
		t = t->next;
	}
	t->next = new_n;
	return (new_n);
}
