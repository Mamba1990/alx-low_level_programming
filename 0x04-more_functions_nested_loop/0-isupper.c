#include "main.h"
/**
* _isupper - Checks for uppercase character
*@c: The character is in ASCII code
*
*Description: 'the program's description'
*Return: 0
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
