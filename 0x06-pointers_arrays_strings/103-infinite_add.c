#include "main.h"

/**
 * rev_string - reverses  array
 * @n: integer input
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char t;

	while (*(n + i) != '\0')
	{
	i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		t = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = t;
	}
}

/**
 * infinite_add - adds 2 numbers
 * @n1: integer input
 * @n2: integer input
 * @r: pointer to buff
 * @size_r: buff size
 * Return: pointer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int _overflow = 0, i = 0, j = 0, _digits = 0;
	int _val1 = 0, _val2 = 0, _temp_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || _overflow == 1)
	{
		if (i < 0)
			_val1 = 0;
		else
			_val1 = *(n1 + i) - '0';
		if (j < 0)
			_val2 = 0;
		else
			_val2 = *(n2 + j) - '0';
		_temp_tot = _val1 + _val2 + _overflow;
		if (_temp_tot >= 10)
			_overflow = 1;
		else
			_overflow = 0;
		if (_digits >= (size_r - 1))
			return (0);
		*(r + _digits) = (_temp_tot % 10) + '0';
		_digits++;
		j--;
		i--;
	}
	if (_digits == size_r)
		return (0);
	*(r + _digits) = '\0';
	rev_string(r);
	return (r);
}

