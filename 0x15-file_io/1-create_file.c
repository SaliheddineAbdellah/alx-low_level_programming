#include "main.h"

/**
 * create_file - creates a file.
 * @filename: pointer to file name
 * @text_content: content of file
 * Return: state of creation
 * 1 for success -1 for failure
 */

int create_file(const char *filename, char *text_content)
{
	int pfile, wr, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	pfile = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(pfile, text_content, length);

	if (pfile == -1 || wr == -1)
		return (-1);

	close(pfile);

	return (1);
}

