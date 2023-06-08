#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: input
 * @size: input
 * Return: sum of diagonals
 */
void print_diagsums(int *a, int size)
{
	int i, sum_1, sum_2;

	sum_1 = 0;
	sum_2 = 0;
	i = 0;

	while (i < size)
	{
		sum_1 = sum_1 + a[i * size + i];
		i++;
	}
	i = size - 1;
	while (i >= 0)
	{
		sum_2 += a[i * size + (size - i - 1)];
		i--;
	}
printf("%d, %d\n", sum_1, sum_2);
}

