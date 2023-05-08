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
	int i, j, k;

	i = 0;
	j = 0;
	k = 0;
	while (n > 0)
	{
		for ( ; *(src + j) != '\0'; j++)
		{
			for ( ; dest[k] != '\0'; k++)
			{
				dest[k] = dest[j];
			}
			j++;
		}
		i++;
		n--;
	}
	return (dest);
}
