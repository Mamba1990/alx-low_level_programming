#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc.
 * @b: integer input
 *
 * Return: a pointer to the allocated memory or 98
*/
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
