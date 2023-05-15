
#include "main.h"
#include <stdlib.h>
/**
 * str_concat - point to a newly allocated space whch contain s1 and s2 ontent
 * @s1: input
 * @s2: input
 * Return: pointer to  concat of s1 and s2 or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *mem;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (*(s1 + i) != '\n')
	{
		i++;
	}
	j = 0;
	while (*(s2 + j) != '\n')
	{
		j++;
	}
	mem = malloc(sizeof(char) * (i + j + 1));
	if (mem == NULL)
	{
		return (NULL);
	}
	i = j = 0;
	while (s1[i] != '\0')
	{
		mem[i] = s1[i];
		i++;
	}
	while (s2[j] != '\n')
	{
		mem[i] = s2[j];
		i++;
		j++;
	}
	mem[i] = '\0';
	return (mem);
}
