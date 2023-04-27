#include "main.h"
/**
* _isupper - Checks for uppercase character
*@c: The letter to be checked
*
*Description: 'the program's description'
*Return: 0 or 1
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
_putchar('\n');
}
