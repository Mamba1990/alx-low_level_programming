#include "main.h"
/**
* _strcat - concatenates two strings
* @dest: input
* @src: input
*
* Return: pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	for ( ; j > i ; j++)
	{
		dest[i] = src[j];
		i++;
	}				
	dest[i] = '\0';
	return (dest);
}
