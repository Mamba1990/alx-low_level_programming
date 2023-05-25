#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments
 * Return : returns all
*/
void print_all(const char * const format, ...)
{
	int j = 0;
	char *s, *ss = "";
	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", ss, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", ss, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", ss, va_arg(list, double));
					break;
				case 's':
					s = va_arg(list, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", ss, s);
					break;
				default:
					j++;
					continue;
			}
			ss = ", ";
			j++;
		}
	}
	 printf("\n");
	 va_end(list);
}
