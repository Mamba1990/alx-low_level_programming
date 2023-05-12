#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point.
 * @argc: argument count
 * @argv: argument vector (one dim array)
 *
 * Return: Always 0 or 1
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum;
	char *c;
	
	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			c = argv[i];
		for (j = 0;j < strlen(c); j++)
		{
			if (c[j] < 48 || c[j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(c);
		c++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
return (0);
}
