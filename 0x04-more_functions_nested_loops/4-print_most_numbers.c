#include "main.h"
/**
* print_most_numbers - t prints the numbers, from 0 to 9
*
*Description: 'the program's description'
*Return: numbers
*/
void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}
_putchar('\n');
}
