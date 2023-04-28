#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: no retrun
*/
void print_number(int n)
{
	unsigned int n_1;

	if (n < 0)
	{
		n_1 = -n;
		_putchar('-');
	}
	else
	{
		n_1 = n;
	}
	if (n_1 / 10)
	{
		print_number(n_1 / 10);
	}
	_putchar((n_1 % 10) + '0');
}



