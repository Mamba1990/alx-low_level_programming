#include <stdlib.h>
#include "main.h"

/**
 * *_realloc -  reallocates a memory block
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: integer input
 * @new_size: integer input
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		_ptr = malloc(new_size);
		if (_ptr == NULL)
		{
			return (NULL);
		}
		return (_ptr);
	}
	else
	_ptr = malloc(new_size);
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
		for (i = 0; i < old_size && i < new_size; i++)
		{
			_ptr[i] = ((char *) ptr)[i];
		}
		free(ptr);
		return (_ptr);
}
