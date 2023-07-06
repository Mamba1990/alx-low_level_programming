#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 for big or 1 for little
 */
int get_endianness(void)
{
	unsigned int j = 1;
	unsigned char *s = (unsigned char *)&j;

	if (*s == 1)
		return (1);
	else
		return (0);
}



