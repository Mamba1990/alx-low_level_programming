#include "main.h"
#include <stddef.h>
/**
 * _strchr -  locates a character in a string.
 * @s: string input
 * @c: char input
 * Return: location of a character in string or NULL.
 */

char *_strchr(char *s, char c)
{
	int j;

	j = 0;
	while (*(s + j) != '\0')
	{
		if (s[j] == c)
		{
			return (&s[j]);
		}
		j++;
	}
return (NULL);
}


