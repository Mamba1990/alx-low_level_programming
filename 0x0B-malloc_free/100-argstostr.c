#include "main.h"
#include <stdlib.h>
/**
 * argstostr -  concatenates all the arguments of the program
 * @ac: integer input
 * @av: double pointer array
 *
 * Return: NULL or Pointer
 */
char *argstostr(int ac, char **av)
{
	int j, m, r = 0, l = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		m = 0;
		while (av[j][m])
		{
			l++;
			m++;
		}
	}
	l += ac;
	s = malloc(sizeof(char) * l + 1);
	if (s == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		m = 0;
		while (av[j][m])
		{
			s[r] = av[j][m];
			r++;
			m++;
		}

		if (s[r] == '\0')
		{
			s[r++] = '\n';
		}
	}
	return (s);
}
