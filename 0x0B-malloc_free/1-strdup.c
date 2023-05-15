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

	i = 0;
	j = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	mem = malloc(sizeof(char) * (i + 1));
	while (str[j])
	{
		mem[j] = str[j];
		j++;
	}
	return (mem);

	if (str == NULL || mem == NULL)
	{
		return (NULL);
	}
}
