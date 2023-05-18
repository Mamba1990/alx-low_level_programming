#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings.
 * @s1: string input
 * @s2: string input
 * @n: number of bytes
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ss;
	unsigned int i, j, l1, l2;

	i = 0, j = 0, l1 = 0, l2 = 0;
	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;
	if (n < l2)
		ss = malloc(sizeof(char) * (l1 + n + 1));
	else
		ss = malloc(sizeof(char) * (l1 + l2 + 1));
	if (!ss)
		return (NULL);
	while (i < l1)
	{
		ss[i] = s1[i];
		i++;
	}
	while (n < l2 && i < (l1 + n))
		ss[i++] = s2[j++];
	while (n >= l2 && i < (l1 + l2))
		ss[i++] = s2[j++];
	ss[i] = '\0';
	return (ss);
}


