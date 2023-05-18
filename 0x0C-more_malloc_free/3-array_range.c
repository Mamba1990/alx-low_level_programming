#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: in input
 * @max: in input
 *
 * Return: pointer or NULL
 */
int *array_range(int min, int max)
{
	int *mem;
	int j, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	mem = malloc(sizeof(int) * size);
	if (mem == NULL)
		return (NULL);
	for (j = 0; min <= max; j++)
		mem[j] = min++;
	return (mem);
}

