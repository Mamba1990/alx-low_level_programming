#include "main.h"
/**
* _memset - fills memory with a constant byte.
* @s: starting address of memory to be filled
* @b: constant byte
* @n: number of bytes of the memory area to be changed.
*
* Return: array with changed bytes.
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
