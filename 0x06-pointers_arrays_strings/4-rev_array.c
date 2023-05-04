#include "main.h"
/**
* reverse_array - reverses array of integers
* @a: array
* @n: number of elements of array
* Return: no return value
*/
void reverse_array(int *a, int n)
{
	int b, j;

	for (j = n - 1; j >= n / 2; j--)
	{
		b = a[n - 1 - j];
		a[n - 1 - j] = a[j];
		a[j] = b;
	}
}


