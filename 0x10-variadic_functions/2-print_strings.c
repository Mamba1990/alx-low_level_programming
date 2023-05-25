#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - Prints strings
* @separator: The string to be printed
* @n: The number of strings
* @...: A variable number of strings
*
* Description: If separator is NULL, it is not printed.
* Return: strins found or (nil)
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *s;
	unsigned int i;

	va_start(strings, n);
	i = 0;
	while (i < n)
	{
		s = va_arg(strings, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(strings);
}




