#include "main.h"
/**
* _strcmp - compares two string
* @s1: input string 1
* @s2: input string 2
* Return: s1[i] - s2[i]
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for ( ; (*(s1 + i) != '\0') && (*(s2 + i) != '\0'); i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}

	}
	return (0);
}



