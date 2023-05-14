#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * main - Entry point.
 * @argc: argument count
 * @argv: argument vector (one dim array)
 *
 * Return: Always 0
*/
int main(int argc, char *argv[])
{
	int number,i ,res;
	int _coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);
	res = 0;

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}
	i = 0;
	for ( ; i < 5 && number >= 0; i++)
	{
		while (number >= _coins[i])
		{
			res++;
			number -= _coins[i];

		}
	}
	printf("%d\n", res);
return (0);
}

