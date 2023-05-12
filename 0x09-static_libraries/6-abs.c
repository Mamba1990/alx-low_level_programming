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
	if (n >= 0)
	{	return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (0);
	}
_putchar('\n');
}
