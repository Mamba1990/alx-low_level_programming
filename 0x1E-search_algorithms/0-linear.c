#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array of
 * ints using the Linear SA
 * Description : linear search function
 * @array:  array
 * @size: array's say
 * @value: value to be searched
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			break;
	}
	if (i == size)
		return (-1);
	return (i);
}
