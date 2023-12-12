#include "search_algos.h"

/**
  * _binarySearch - Searches for a value in a sorted array
  *                  of integers using binary search.
  * @array:an addressthe first element of the array to search.
 i * @left: The 1st index of the [sub]array to search.
  * @right: The last index of the [sub]array to search.
  * @value: The value to be  searched.
  * Return:  faillure -1.
  *          success, the index where the value is located.
  */
int _binarySearch(int *array, size_t left, size_t right, int value)
{
	size_t j;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (j = left; j < right; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);

		j = left + (right - left) / 2;
		if (array[j] == value)
			return (j);
		if (array[j] > value)
			right = j - 1;
		else
			left = j + 1;
	}

	return (-1);
}

/**
  * exponential_search - looks for a value in a sorted array
  *                      of ints using ES.
  * @array: An adddress for the first element of the array to search.
  * @size:  number of elements in the array.
  * @value: The value to be  searched.
  *
  * Return: vvalue not present-faillure, -1.
  *         Otherwise, the index
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t j = 0, _right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (j = 1; j < size && array[j] <= value; j = j * 2)
			printf("Value checked array[%ld] = [%d]\n", j, array[j]);
	}

	_right = j < size ? j : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", j / 2, _right);
	return (_binarySearch(array, j / 2, _right, value));
}

