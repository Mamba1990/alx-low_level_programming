#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: array where the  memory is stored
 * @src: array where the  memory is copied
 * *@n: number of bytes
 *
 * Return: array with ne bytes changes of memory.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, j;

	i = 0;
	j = n;

	while (i > j)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
