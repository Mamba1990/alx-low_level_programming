#include <stdio.h>
/**
* main - Entry point
*
* Description: 'the program's description'
* Return: 0
*/
int main(void)
{
	int a, b, c;

	for (a = 48; a < 58; a++)
	{
		for (b = 49; b < 58; b++)
		{
			for (c = 50; c < 58; c++)
			{
				if (c > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 55 || b != 56)
					{
						putchar(',',' ');					
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

