#include "main_1.h"
/**
* _isupper - Checks for uppercase character
*@c: The character is in ASCII code
*
*Description: 'the program's description'
*Return: 0
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
