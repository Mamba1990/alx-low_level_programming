#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * is_num - checks if there is digit in string
 * @str: input
 *
 * Return: Always 0 (Success)
 */
int is_num(char *str)
{
	unsigned int c;

	c = 0;
	while (c < strlen(str))
	{
		if (!isdigit(str[c]))
		{
			return (0);
		}
		c++;
	}
	return (1);
}

/**
 * main - Entry point.
 * @argc: argument count
 * @argv: argument vector (one dim array)
 *
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	int c;
	int strToInt;
	int sum = 0;

	c = 1;

	while (c < argc)
	{
		if (is_num(argv[c]))
		{
			strToInt = atoi(argv[c]);
			sum += strToInt;
		}

		else
		{
			printf("Error\n");
			return (1);
		}
		c++;
	}
	printf("%d\n", sum);
	return (0);
}
