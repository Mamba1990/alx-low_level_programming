#include "search_algos.h"
#include <math.h>

/**
 * jump_search - looks for a value in an array of
 * ints using the Jump SA
 *
 * @array: array
 * @size:  array's size
 * @value: value to be searched
 * Return: the number's index
 */
int jump_search(int *array, size_t size, int value)
{
	int idx, m, j, _prev;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	j = 0;
	_prev = idx = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);
		j++;
		_prev = idx;
		idx = j * m;
	} while (idx < (int)size && array[idx] < value);

	printf("Value found between indexes [%d] and [%d]\n", _prev, idx);

	for (; _prev <= idx && _prev < (int)size; _prev++)
	{
		printf("Value checked array[%d] = [%d]\n", _prev, array[_prev]);
		if (array[_prev] == value)
			return (_prev);
	}

	return (-1);
}
