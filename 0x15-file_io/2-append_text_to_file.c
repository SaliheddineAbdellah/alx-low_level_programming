#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer to filename
 * @text_content: text to append
 * Return: 1 for success -1 for failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int pfile, pw, length;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	pfile = open(filename, O_WRONLY | O_APPEND);
	pw = write(pfile, text_content ,length);
	if (pfile == -1 || pw == -1)
		return (-1);

	close(pfile);
	return (1);
}
