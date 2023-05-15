
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
	int i = 0, j = 0, k = 0, l = 0;
	char *mem;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	l = i + j;
	mem = malloc((sizeof(char) * l) + 1);
	if (mem == NULL)
		return (NULL);
	j = 0;
	while (k <= l)
	{
		if (k <= i)
			mem[k] = s1[k];
		if (k >= i)
		{
			mem[k] = s2[j];
			j++;
		}
		k++;
	}
	mem[k] = '\0';
	return (mem);
}





