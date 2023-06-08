#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring.
 * @haystack: input
 * @needle: input
 * Return: Returns a pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *hay = haystack;
		char *nee = needle;

		while (*hay == *nee && *nee != '\0')
		{
			hay++;
			nee++;
		}

			if (*nee == '\0')
			return (haystack);
			haystack++;
	}
	return (NULL);
}
