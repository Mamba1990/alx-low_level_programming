#include <stdlib.h>
#include "main.h"
/**
 * *mem_set - fills memory with a constant byte
 * @ss: memory area to be filled
 * @b: char input
 * @n: integer input
 *
 * Return: pointer
*/
char *mem_set(char *ss, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		ss[j] = b;
	}
	return (ss);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: int input
 * @size: int input
 *
 * Return: pointer or NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(size * nmemb);
	if (mem == NULL)
		return (NULL);
	mem_set(mem, 0, nmemb * size);
	return (mem);
}


