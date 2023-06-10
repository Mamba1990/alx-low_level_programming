#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string input
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int res = 0;

	if (b == NULL)
		return (0);
	j = 0;
	while (b[j])
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		res = 2 * res + (b[j] - '0');
		j++;
	}
	return (res);
}
