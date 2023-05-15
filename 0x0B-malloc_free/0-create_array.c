#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: integer input
 * @c: char input
 * Description: creat array of size size and assign char c
 * Return: pointer to array, NULL if it  fail
 */
char *create_array(unsigned int size, char c)
{
	char *array_c;
	unsigned int i;

	array_c = malloc(sizeof(char) * size);
	if (size == 0 || array_c == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		array_c[i] = c;
		i++;
	}
	return (array_c);
return (0);
}
