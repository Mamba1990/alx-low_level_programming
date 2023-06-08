#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: input
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int j, c;
	unsigned long int number;
	unsigned long int _size = sizeof(unsigned long int) * 8;

	j = _size - 1;
	while (j >= 0)
	{
		number = n >> j;
		if (number & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
		{
			_putchar('0');
		}
		j--;
	}
	if (!c)
	{
		_putchar('0');
	}
}

