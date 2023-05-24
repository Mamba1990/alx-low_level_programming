#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int _bytes, j;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	_bytes = atoi(argv[1]);
	if (_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;

	j = 0;
	while (j < _bytes)
	{
		if (j == _bytes - 1)
		{
			printf("%02hhx\n", array[j]);
			break;
		}
		printf("%02hhx ", array[j]);
		j++;
	}
	return (0);
}
