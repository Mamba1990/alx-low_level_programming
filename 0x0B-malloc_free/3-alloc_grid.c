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
	int i, j, k, l;
	int **mem;

	if (width <= 0 || height <= 0)
		return (NULL);
	mem = malloc(sizeof(int *) * height);
	if (mem == NULL)
	{
		free(mem);
		return (NULL);
	}
	for (i = 0; i <= height; i++)
	{
		mem[i] = malloc(sizeof(int) * width);
		if (mem == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(mem[j]);
			}
			free(mem);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			mem[k][l] = 0;
		}
	}
	return (mem);
}



