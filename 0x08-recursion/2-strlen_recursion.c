#include "main.h"

/**
 * _strlen_recursion- returns the length of a string
 * @s: string
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int number = 0;

	if (*s)
	{
		number++;
		number += _strlen_recursion(s + 1);
	}
	return (number);
}

