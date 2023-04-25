#include "main.h"
/**
* _abs - Compute the absolute value of an integer
*@n: Input  number of an integer
*
*Description: 'the program's description'
*Return: abolute value
*/
int _abs(int n)
{
	if (n > 0)
	{	_putchar(n);
	}
	else if (n < 0)
	{
		_putchar(-n);
	}
	else
	{
		_putchar(0);
	}
_putchar('\n');
return (0);
}
