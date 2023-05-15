#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: char input
 *
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
	char *mem;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	mem = malloc(sizeof(char) * (i + 1));
	if (mem == NULL)
	{
		return (NULL);
	}
	j = 0;
	for ( ; str[j]; j++)
	{
		mem[j] = str[j];
	}
	return (mem);
}
