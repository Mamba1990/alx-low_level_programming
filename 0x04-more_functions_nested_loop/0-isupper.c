#include "main.h"
/**
* _isupper - Checks for uppercase character
*@x: The letter to be checked
*
*Description: 'the program's description'
*Return: 0 or 1
*/
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
_putchar('\n');
}
