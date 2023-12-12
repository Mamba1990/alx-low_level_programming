#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in an array of
 * ints by using the Jump search algorithm
 *
 * @list: input list
 * @size: array's size
 * @value: value to be searched
 * Return: the number's index
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t idx, k, m;
	listint_t *_prev;

	if (list == NULL || size == 0)
		return (NULL);

	m = (size_t)sqrt((double)size);
	idx = 0;
	k = 0;

	do {
		_prev = list;
		k++;
		idx = k * m;

		while (list->next && list->idx < idx)
			list = list->next;

		if (list->next == NULL && idx != list->idx)
			idx = list->idx;

		printf("Value checked at index [%d] = [%d]\n", (int)idx, list->n);

	} while (idx < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)_prev->idx, (int)list->idx);

	for (; _prev && _prev->idx <= list->idx; _prev = _prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)_prev->index, _prev->n);
		if (_prev->n == value)
			return (_prev);
	}

	return (NULL);
}
