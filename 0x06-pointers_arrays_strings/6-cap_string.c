#include "main.h"
/**
* cap_string - Capitalizes all words of a string.
* @str: input string
*
* Return: A pointer to the capitalized string
*/
char *cap_string(char *str)
{
	int l = 0;

	while (*(str + l))
	{
		while (!(str[l] >= 97 && str[l] <= 122))
		l++;
		if (str[l - 1] == ' ' ||
		str[l - 1] == '\t' ||
		str[l - 1] == '\n' ||
		str[l - 1] == ',' ||
		str[l - 1] == '.' ||
		str[l - 1] == ';' ||
		str[l - 1] == '!' ||
		str[l - 1] == '?' ||
		str[l - 1] == '"' ||
		str[l - 1] == '(' ||
		str[l - 1] == ')' ||
		str[l - 1] == '{' ||
		str[l - 1] == '}' ||
		l == 0)
		str[l] -= 32;
		l++;
	}
	return (str);
}

