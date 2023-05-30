#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: input
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int k, j, i;

	k = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (k < size)
	{
		j = size - k < 10 ? size - k : 10;
		printf("%08x: ", k);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + k + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int cc = *(b + k + i);

			if (cc < 32 || cc > 132)
			{
				cc = '.';
			}
			printf("%c", cc);
		}
		printf("\n");
		k += 10;
	}
}



