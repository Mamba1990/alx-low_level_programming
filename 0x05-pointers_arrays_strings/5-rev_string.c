#include "main.h"
#include <unistd.h>
/**
* rev_string - Reverses a string
* @s: Input string
* Return: String in reverse
*/
void rev_string(char *s)
{
	char s_reversed = s[0];
	int j = 0;
	int i;

	while (s[j] != '\0')
	{
		j++;
		for (i = 0; i < j; i++)
		{
			j--;
			s_reversed = s[i];
			s[i] = s[j];
			s[j] = s_reversed;
		}
	}
}
