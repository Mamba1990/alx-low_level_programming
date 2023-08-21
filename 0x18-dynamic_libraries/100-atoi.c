#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
* _atoi - converts a string to an integer
* @s: string input
* Return: integer
*/
int _atoi(char *s)
{
	int i = 0;
	unsigned int n = 0;
	int m = 1;
	int ss = 0;

	while (s[i])
	{
	if (s[i] == 45)
		{
	m *= -1;
	}
	while (s[i] >= 48 && s[i] <= 57)
	{
	ss = 1;
	n = (n * 10) + (s[i] - '0');
	i++;
	}
	if (ss == 1)
	{
	break;
	}
	i++;
	}
	n *= m;
	return (n);
}

