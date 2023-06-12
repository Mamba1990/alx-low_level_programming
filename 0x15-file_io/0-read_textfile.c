#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile- Reads a text file prints it to STDOUT.
 * @filename: text file to be read
 * @letters: number of letters to be read and print
 *
 * Return: number of letters to be read and print or
 * 0 (file NULL ,file not open/read)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t op, wr, rd;

	if (filename == NULL)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}
	op = open(filename, O_RDONLY);
	rd = read(op, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);
	free(buff);
	close(op);
	return (wr);
}


