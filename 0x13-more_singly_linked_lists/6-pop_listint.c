#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first node in  linked list
 *
 * Return: the data of the deleted node or 0
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *t;
	int m;

	if (*head == NULL)
	{
		return (0);
	}
	m = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;
	return (m);
}


