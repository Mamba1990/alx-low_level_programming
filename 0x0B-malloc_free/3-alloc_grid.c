#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **mem;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);
	mem = malloc(sizeof(int *) * height);
	if (mem == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		mem[h] = malloc(sizeof(int) * width);
		if (mem[h] == NULL)
		{
			for (; h >= 0; h--)
				free(mem[h]);
			free(mem);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			mem[h][w] = 0;
	}
	return (mem);
}



