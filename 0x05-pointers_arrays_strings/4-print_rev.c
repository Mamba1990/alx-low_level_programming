#include "main.h"
/**
* print_rev - prints a string, in reverse
* @s: string
* return: 0
*/
void print_rev(char *s)
{
	int len;
	int i;

	for (len = 0; *s != '\0'; len++)
	{
		s++;
	}
	s--;
	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
_putchar('\n');
}
