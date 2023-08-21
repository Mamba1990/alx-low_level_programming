#include "main.h"
/**
* _isalpha - Checks for alphabetic character
*@c: The character is in ASCII code
*
*Description: 'the program's description'
*Return: 0
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
