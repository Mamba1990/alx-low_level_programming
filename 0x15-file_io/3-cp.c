#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *createBuffer(char *f);
void closeFile(int _fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @f: name of the file buffer
 *
 * Return:  pointer to the allocated buffer.
 */


char *createBuffer(char *f)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", f);
		exit(99);
	}

	return (buff);
}

/**
 * closeFile - Closes file.
 * @_fd: The file descriptor
 */
void closeFile(int _fd)
{
	int cl;

	cl = close(_fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", _fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments
 * @argv: array of pointers to the arguments.
 * description: exit 97 98 99 100
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int f_from, f_to, rd, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = createBuffer(argv[2]);
	f_from = open(argv[1], O_RDONLY);
	rd = read(f_from, buff, 1024);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f_from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wr = write(f_to, buff, rd);
		if (f_to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		rd = read(f_from, buff, 1024);
		f_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buff);
	closeFile(f_from);
	closeFile(f_to);

	return (0);
}
