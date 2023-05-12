#include "main.h"
#include <stdio.h>
int atoi(char *s);
/**
 * main - Entry point.
 * @argc: argument count
 * @argv: argument vector (one dim array)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a, b, mul;

	a = 0;
	b = 0;
	mul = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", mul = a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

return (0);

}
