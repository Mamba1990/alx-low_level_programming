#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - Returns the sum of all its paramters.
* @n: The number of paramters passed
* @...: a variable number of paramters
*
*  Return: the sum or
*/
int sum_them_all(const unsigned int n, ...)
{
	 va_list argms;
	 unsigned int j, sum = 0;

	va_start(argms, n);
	j = 0;
	while (j < n)
	{
		sum += va_arg(argms, int);
		j++;
	}
	va_end(argms);
	return (sum);
}

