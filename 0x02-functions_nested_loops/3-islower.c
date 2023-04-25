#include "main.h"
/**
* _islower - Checks for lowercase character
*@c: The character is in ASCII code
*
*Description: 'the program's description'
*Return: 0
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
