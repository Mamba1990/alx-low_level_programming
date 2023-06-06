#include "main.h"

/**
 * print_chessboard - prints a chess board
 * @a: array
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	for ( ; i < 8; i++)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
	}
}
