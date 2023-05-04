#include "main.h"
/**
* *string_toupper - changes all lowercase to uppercase
* @s: pointer to a char
* Return: string output
*/
char *string_toupper(char *s)
{
	int s_lenght = 0;

	while (*(s + s_lenght) != '\0')
	{
		if (s[s_lenght] >= 97 && s[s_lenght] <= 122)
			s[s_lenght] = s[s_lenght] - 32;
		s_lenght++;
	}
	return (s);

}
