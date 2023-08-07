#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX std output
 * @filename: pointer to filename
 * @letters: number of letters to read and print
 * Return: number of bytes read and printed
 * or 0 when failure or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffertoname;
	ssize_t fd;
	ssize_t bytesread;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffertoname = malloc(sizeof(char) * letters);
	if (buffertoname == NULL)
	{
		close(fd);
		return (0);
	}
	bytesread = read(fd, buffertoname, letters);
	if (bytesread == -1)
	{
		close(fd);
		return (0);
	}
	bytesread = write(STDOUT_FILENO, buffertoname, bytesread);
	if (bytesread == -1)
	{
		free(buffertoname);
		close(fd);
		return (0);
	}
	free(buffertoname);
	close(fd);
	return (bytesread);
}
