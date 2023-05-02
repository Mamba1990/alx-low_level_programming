#include "main.h"
/**
* puts2 - prints every other character of a string
*
* @str: input
* Return: characters of string separed by a line
*/
void puts2(char *str)
{
	int l = 0;
	int j = 0;
	char *s = str;
	int k;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	j = l - 1;
	for (k = 0; k <= j; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}


