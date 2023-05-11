#include "main.h"
int _strlen_recursion(char *s);
int _palindrome(char *s, int i, int length);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string input
 *
 * Return: 1 if true, 0 if false
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_palindrome(s, 0, _strlen_recursion(s)));
}

#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: input string
 *
 * Return: length
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}


/**
 * _palindrome - checks the characters
 * @s: string input
 * @i: integer iterator
 * @length: length of the string
 *
 * Return: 1 if true 0 if not
*/
int _palindrome(char *s, int i, int length)
{
	if (s[i] != s[length - 1])
		return (0);
	if (i >= length)
		return (1);
	return (_palindrome(s, i + 1, length - 1));
}
