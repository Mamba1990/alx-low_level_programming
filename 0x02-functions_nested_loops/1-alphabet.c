#include"main.h"
/**
*print_alphabet - prints alphabet in lowercase
*Description: 'the program's description'
*Return: 0
*/
void print_alphabet(void)
{
char lower_case = 'a';

while (lower_case <= 'z')
{
	_putchar(lower_case);
	lower_case++;
}
_putchar('\n');
}
