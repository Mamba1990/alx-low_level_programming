#include "main.h"
/**
* print_last_digit - Prints the last digit of an integer
*@n: Input  number of an integer
*
*Description: 'the program's description'
*Return: last digit
*/
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		_putchar(-last_digit + 48);
		return (-last_digit);
	}
	else
	{
		_putchar(last_digit + 48);
		return (last_digit);
	}
_putchar('\n');
}
