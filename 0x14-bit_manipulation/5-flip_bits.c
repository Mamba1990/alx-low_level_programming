#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flipe
 * to get from one number to another
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: number of bitse
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c;
	unsigned long int ex = n ^ m;

	c = 0;
	for ( ; ex != 0; c++)
	{
		ex &= (ex - 1);
	}
	return (c);
}


