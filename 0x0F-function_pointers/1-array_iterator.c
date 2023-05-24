#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator -
 * @array: pointer to an array
 * @size : number of element to print
 * @action: pointer to function that returns int
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
