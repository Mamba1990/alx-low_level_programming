#include "search_algos.h"

/**
 * recursiveSearch - looks for a value in an array of
 * ints using the Binary SA
 * @array: input array
 * @size: array's size
 * @value: value to search in
 * Return: index of the number
 */
int recursiveSearch(int *array, size_t size, int value)
{
	size_t _half = size / 2;
	size_t k;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (k = 0; k < size; k++)
		printf("%s %d", (k == 0) ? ":" : ",", array[k]);

	printf("\n");

	if (_half && size % 2 == 0)
		_half--;

	if (value == array[_half])
		return ((int)_half);

	if (value < array[_half])
		return (recursiveSearch(array, _half, value));

	_half++;

	return (recursiveSearch(array + _half, size - _half, value) + _half);
}

/**
 * binary_search - uses  binarySearch to return
 * the index of the number
 * @array:  array
 * @size:  array's size
 * @value: value to be searched
 * Return: number's index
 */
int binary_search(int *array, size_t size, int value)
{
	int idx;

	idx = recursiveSearch(array, size, value);

	if (idx >= 0 && array[idx] != value)
		return (-1);

	return (idx);
}
