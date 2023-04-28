#include <stdio.h>
#include <math.h>
/**
* main - finds and prints the largest prime factor of the number 612852475143
*
* Description: 'the program's description'
* Return: Always 0 (Success)
*/
int main(void)
{
	long int n;
	long int max_fact;
	long int i;

	n = 612852475143;
	max_fact = -1;

	while (n % 2 == 0)
	{
		max_fact = 2;
		n /= 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max_fact = i;
			n = n / i;
		}
	}
		if (n > 2)
			max_fact = n;
		printf("%ld\n", max_fact);
		return (0);
}

