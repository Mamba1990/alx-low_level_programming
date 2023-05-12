#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string.
 * @s:  input string
 * @c:  input char
 *
 * Return: location of charachter or NULL
 */

char *_strchr(char *s, char c)
{
	int j;

	j = 0;
	while (*(s + j) >= '\0')
	{
		if (s[j] == c)
		{
			return (&s[j]);
		}
		j++;
	}
return (NULL);
}


