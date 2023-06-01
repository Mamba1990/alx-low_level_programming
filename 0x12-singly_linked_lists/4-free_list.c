#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: list to be freed
 * Return : nothing
 */
void free_list(list_t *head)
{
	list_t *t;

	while (head != NULL)
	{
		t = head->next;
		free(head->str);
		free(head);
		head = t;
	}
}