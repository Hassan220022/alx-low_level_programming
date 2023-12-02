#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: the file to read
* @letters: the number of letters it should read and print
*
* Return: the actual number of letters it could read and print, 0 if:
* - the file can not be opened or read
* - filename is NULL
* - write fails or does not write the expected amount of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	ssize_t n_read, n_wrote;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	n_read = read(fd, buffer, letters);
	if (n_read < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	n_wrote = write(STDOUT_FILENO, buffer, n_read);
	if (n_wrote < 0 || n_read != n_wrote)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (n_wrote);
}
