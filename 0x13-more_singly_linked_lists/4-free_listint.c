#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: list to be freed
 * Return : nothing
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head != NULL)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
