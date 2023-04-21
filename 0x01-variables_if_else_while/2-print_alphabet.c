#include <stdio.h>
/**
* main - Entry point
*
* Description: 'the program's description'
* Return: 0
*/
int main(void)
{
	char lower_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		putchar(lower_case);
	}
	putchar('\n');
	return (0);
}
