#include "search_algos.h"

/**
 * linear_search - looks for a value in an array of
 * ints using the LS algorithm.
 * @array: address the first element of the array to search in.
 * @size: the number of elements in array.
 * @value:the value to be  searched.
 * Return: first index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t j;

	if (!array || size <= 0)
		return (-1);

	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
