#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of
 * ints using the Linear SA
 *
 * @array:  array
 * @size: array's say
 * @value: value to be searched
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int k;

	if (array == NULL)
		return (-1);

	for (k = 0; k < (int)size; k++)
	{
		printf("Value checked array[%u] = [%d]\n", k, array[k]);
		if (value == array[k])
			return (k);
	}
	return (-1);
}
