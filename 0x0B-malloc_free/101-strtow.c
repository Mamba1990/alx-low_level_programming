#include <stdlib.h>
#include "main.h"
/**
 * _count_word - helper function to count the number of words given in a string
 * @s: string input
 *
 * Return: num of words
 */
int _count_word(char *s)
{
	int flg, ch, word;

	flg = 0;
	word = 0;
	ch = 0;

	while (s[ch] != '\0')
	{
		if (s[ch] == ' ')
			flg = 0;
		else if (flg == 0)
		{
			flg = 1;
			word++;
		}
		ch++;
	}
	return (word);

}
/**
 * **strtow - splits a string into words
 * @str: string input
 *
 * Return: pointer or NULL
 */

char **strtow(char *str)
{
	char **mat, *t;
	int i, j = 0, _len = 0, _words, ch = 0, _start, _end;

	while (*(str + _len))
		_len++;
	_words = _count_word(str);
	if (_words == 0)
		return (NULL);
	mat = (char **) malloc(sizeof(char *) * (_words + 1));
	if (mat == NULL)
		return (NULL);
	for (i = 0; i <= _len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (ch)
			{
				_end = i;
				t = (char *) malloc(sizeof(char) * (ch + 1));
				if (t == NULL)
					return (NULL);
				while (_start < _end)
					*t++ = str[_start++];
				*t = '\0';
				mat[j] = t - ch;
				j++;
				ch = 0;
			}
		}
		else if (ch++ == 0)
			_start = i;
	}
	mat[j] = NULL;
	return (mat);
}

