#include "main.h"
/**
* cap_string - Capitalizes all words of a string.
* @str: input string
*
* Return: A pointer to the capitalized string
*/
char *cap_string(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		while (!(str[i] >= 97 && str[i] <= 122))
		i++;
		if (str[i - 1] == ' ' ||
		str[i - 1] == '\t' ||
		str[i - 1] == '\n' ||
		str[i - 1] == ',' ||
		str[i - 1] == '.' ||
		str[i - 1] == ';' ||
		str[i - 1] == '!' ||
		str[i - 1] == '?' ||
		str[i - 1] == '"' ||
		str[i - 1] == '(' ||
		str[i - 1] == ')' ||
		str[i - 1] == '{' ||
		str[i - 1] == '}' ||
		i == 0)
		str[i] -= 32;
		i++;
	}
	return (str);
}

