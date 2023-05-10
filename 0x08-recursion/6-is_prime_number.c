
#include "main.h"
int __prime(int n, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: integer input
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (-1);
	else if (n == 1)

		return (1);
	else
		return (__prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime
 * @n: integer input
 * @i: iterator
 *
 * Return: 1 if true, 0 if not
*/
int __prime(int n, int i)
{
	if (n % i == 0 && i > 0)
		return (0);

return (__prime(n, i - 1));
}

