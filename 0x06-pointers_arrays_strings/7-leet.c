#include "main.h"
/**
* leet - encodes a string into 1337.
* @c: input ,pointer to char
* Return: c
*/
char *leet(char *c)
{
	int str_1_len, str_2_len;

	char str_1[] = "aAeEoOtTlL";
	char str_2[] = "4433007711";

	for (str_1_len = 0; c[str_1_len] != '\0'; str_1_len++)
	{
		for (str_2_len = 0; str_2_len < 10; str_2_len++)
		{
			if (c[str_1_len] == str_1[str_2_len])
			{
				c[str_1_len] = str_2[str_2_len];
			}
		}
	}
	return (c);
}

