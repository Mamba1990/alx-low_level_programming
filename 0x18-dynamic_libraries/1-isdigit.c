#include "main.h"
/**
* _isdigit - checks for a digit (0 through 9)
*@c: Input  number of an integer
*
*Description: 'the program's description'
*Return: 1 or 0
*/
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
