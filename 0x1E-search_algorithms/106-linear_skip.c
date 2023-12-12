#include "search_algos.h"

/**
 * linear_skip - searches for a value in a skip list
 *
 * @list: input
 * @value: value to be searched
 * Return: the number's index
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *goo;

	if (list == NULL)
		return (NULL);

	goo = list;

	do {
		list = goo;
		goo = goo->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)goo->index, goo->n);
	} while (goo->express && goo->n < value);

	if (goo->express == NULL)
	{
		list = goo;
		while (goo->next)
			goo = goo->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)goo->index);

	while (list != goo->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
