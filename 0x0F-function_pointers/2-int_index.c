#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of array's elements
 * @cmp:  pointer to the function to be used to compare values
 * Return: returns the index of the 1st element or 1 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}


