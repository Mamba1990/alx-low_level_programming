#include "search_algos.h"

/**
 * recSearch - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int recSearch(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (recSearch(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (recSearch(array, half + 1, value));

	half++;
	return (recSearch(array + half, size - half, value) + half);
}

/**
 * advanced_binary - calling to recSearch to return
 * the index of the number
 * @array: inpu
 * @size: the array's size
 * @value: value to be  searched
 * Return: index of the number
 * Description: advanced binary research
 */
int advanced_binary(int *array, size_t size, int value)
{
	int idx;

	idx = recSearch(array, size, value);

	if (idx >= 0 && array[idx] != value)
		return (-1);

	return (idx);
}
