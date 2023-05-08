#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input
 * @accept: input
 * Return: location fot the first occurence or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	
	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (*s == accept[i])
			return (s);
			i++;
		}
		s++;
	}
	return ('\0');
}

