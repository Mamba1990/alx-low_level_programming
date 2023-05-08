#include "main.h"

/**
 * _strspn - gets the length of a prefix substrings.
 * @s: input
 * @accept: input
 * Return: Returns the number of bytes in the inital segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int number_b;
	int i;

	number_b = 0;

		while (*s)
		{
			i = 0;
			while (accept[i])
		{
			if (*s == accept[i])
			{
				number_b++;
				break;
			}
			else if	(accept[i + 1] == '\0')
			{
				return (number_b);
			}
			i++;
		}
		s++;
	}
	return (number_b);
}
