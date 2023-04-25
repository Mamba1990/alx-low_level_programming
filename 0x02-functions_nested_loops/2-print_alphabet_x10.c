#include"main.h"
/**
*print_alphabet_x10 - prints alphabet 10 times in lowercase
*Description: 'the program's description'
*Return: 0
*/
void print_alphabet_x10(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		char lower_case;

		for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
		{
			_putchar(lower_case);
			_putchar('\n');
		}
	}
}
