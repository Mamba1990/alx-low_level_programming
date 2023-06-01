#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to a  pointer to the list_t list
 * @str: new string to be added in the node
 *
 * Return: pointer to the new node added
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n;
	list_t *t = *head;
	unsigned int len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
	{
		return (NULL);
	}
	new_n->str = strdup(str);
	new_n->len = len;
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




