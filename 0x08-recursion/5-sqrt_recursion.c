
#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input integer
 *
 * Return: -1 or a natural square.
 */
int _sqrt_recursion(int n)
{
int __sqrt_recursion(int n, int i);
	if (n < 0)
		return (-1);

	else if (n == 1)
		return (1);

	else
	{
		return (__sqrt_recursion(n, 1));
	}
}

/**
 * __sqrt_recursion - recurses to find the natural 
 * square root of a number
 * @n: integer input
 * @i: iterator
 *
 * Return: the result
 */
int __sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);

	else if (i * i == n)
		return (i);

return (__sqrt_recursion(n, i + 1));

}

