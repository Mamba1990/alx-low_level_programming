#include "main.h"
/**
* _strncpy - copies a string
* @dest: input value
* @src: input string
*@n: input integer
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int src_length = 0;

	for ( ; src_length < n && src[src_length] != '\0' ; src_length++)
	{
		dest[src_length] = src[src_length];
	}
	for ( ; src_length < n; src_length++)
	{
		dest[src_length] = '\0';
	}
	return (dest);
}
