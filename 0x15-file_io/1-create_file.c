#include "main.h"

/**
 * create_file - Creates a file
 * @filename: A pointer to of the file to be created
 * @text_content: pointer to the  string to be written to the file.
 *
 * Return: 1 success -1 faillure
 */
int create_file(const char *filename, char *text_content)
{
	int op;
	int wr;
	int length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[length])
		{
			length++;
		}
	}
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, length);
	if (op == -1 || wr == -1)
	{
		return (-1);

	}
	close(op);
	return (1);
}

