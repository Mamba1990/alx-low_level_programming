#include "main.h"
#include <stdio.h>
/**
 * rot13 -  encodes a string using rot13.
 * @s: input pouber to a string
 *
 * Return: s
 */
char *rot13(char *s)
{
	int j, k;

	char letters[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char letters_rot[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (j = 0; *(s + j) != '\0'; j++)
	{
		for (k = 0; k < 52; k++)
		{
			if (s[j] == letters[k])
			{
				s[j] = letters_rot[k];
				break;
			}
		}
	}
	return (s);
}



