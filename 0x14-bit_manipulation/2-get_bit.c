#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to be resarched
 * @index: index  (integer input)
 *
 * Return: value or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value_b;

	if (index > 63)
	{
		return (-1);
	}
	value_b = (n >> index) & 1;
	return (value_b);
}

