#include "main.h"
/**
* cap_string - Capitalizes all words of a string.
* @str: input string
*
* Return: A pointer to the capitalized string
*/
char *cap_string(char *str)
{
	int str_lenght = 0;

	while (*(str + str_lenght))
	{
		while (!(str[str_lenght] >= 97 && str[str_lenght] <= 122))
			str_lenght++;
		if (str[str_lenght - 1] == ' ' || str[str_lenght - 1] == '\t' || str[str_lenght - 1] == '\n' ||
						str[str_lenght - 1] == ',' ||
						str[str_lenght - 1] == ';' ||
						str[str_lenght - 1] == '.' ||
						str[str_lenght - 1] == '!' ||
						str[str_lenght - 1] == '?' ||
						str[str_lenght - 1] == '"' ||
						str[str_lenght - 1] == '(' ||
						str[str_lenght - 1] == ')' ||
						str[str_lenght - 1] == '{' ||
						str[str_lenght - 1] == '}' ||
						str_lenght == 0)
			str[str_lenght] -= 32;
				str_lenght++;
	}
	return (str);
}

