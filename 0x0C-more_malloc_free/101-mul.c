#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERROR_MSG "Error"
/**
 * is_digit - finds out if a string contains a non-digit charachter
 * @s: string input
 *
 * Return: 0 or 1
 */
int is_digit(char *s)
{
	int j = 0;

	for ( ; s[j]; j++)
	{
		if (s[j] < '0' || s[j] > '9')
			return (0);
	}
	return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; length++)
	{
		s++;
	}
	return (length);
}
/**
 * _errors - handles errors for main function
 */
void _errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies 2 positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *_s1, *_s2;
	int _len1, _len2, _len, j, _carry, dig1, dig2, *res, b = 0;

	_s1 = argv[1], _s2 = argv[2];
	if (argc != 3 || !is_digit(_s1) || !is_digit(_s2))
		_errors();
	_len1 = _strlen(_s1);
	_len2 = _strlen(_s2);
	_len = _len1 + _len2 + 1;
	res = malloc(sizeof(int) * _len);
	if (!res)
		return (1);
	for (j = 0; j <= _len1 + _len2; j++)
		res[j] = 0;
	for (_len1 = _len1 - 1; _len1 >= 0; _len1--)
	{
		dig1 = _s1[_len1] - '0';
		_carry = 0;
		for (_len2 = _strlen(_s2) - 1; _len2 >= 0; _len2--)
		{
			dig2 = _s2[_len2] - '0';
			_carry += res[_len1 + _len2 + 1] + (dig1 * dig2);
			res[_len1 + _len2 + 1] = _carry % 10;
			_carry /= 10;
		}
			if (_carry > 0)
				res[_len1 + _len2 + 1] += _carry;
	}
	for (j = 0; j < _len - 1; j++)
	{
		if (res[j])
			b = 1;
		if (b)
			_putchar(res[j] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}


