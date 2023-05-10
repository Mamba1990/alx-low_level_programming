#include "main.h"

/**
 * _puts_recursion - prints a string 
 * @s: input
 *
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
		if (*s == '\n')
	{
		return;
	}
	{
		_puts_recursion(s);
	}
}
		

