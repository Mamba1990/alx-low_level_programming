#include "main.h"
/**
* _strncat - concatenate two strings
* @dest: input
* @src: input
* @n: input integer
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0;
	int src_length = 0;

	while (*(dest + dest_length) != '\0')
	{
		dest_length++;
	}
	while (src_length < n && *(src + src_length) != '\0')
	{
		dest[dest_length] = src[src_length];
		dest_length++;
		src_length++;
	}
	dest[dest_length] = '\0';
	return (dest);
}

