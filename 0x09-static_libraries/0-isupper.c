#include "main.h"
/**
* _isupper - Checks for uppercase character
*@c: The number to be checked
*
*Description: 'the program's description'
*Return: 0 or 1
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
}
