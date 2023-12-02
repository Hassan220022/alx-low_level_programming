#include "main.h"

/**
 * error_checking - checks if an error occurred
 * @is_error: 1 if an error occurred, 0 otherwise
 * @exit_code: the exit code to use if an error occurred
 * @message: the message to print if an error occurred
 */
void error_checking(int is_error, int exit_code, char *message)
{
	if (is_error)
	{
		dprintf(STDERR_FILENO, "%s\n", message);
		exit(exit_code);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, read_status, write_status;

	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	error_checking(file_from < 0, 98, "Error: Can't read from file ");

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_checking(file_to < 0, 99, "Error: Can't write to ");

	while ((read_status = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_status = write(file_to, buffer, read_status);
		if (write_status != read_status)
			error_checking(1, 99, "Error: Can't write to ");
	}

	error_checking(read_status < 0, 98, "Error: Can't read from file ");

	error_checking(close(file_from) < 0, 100, "Error: Can't close fd ");
	error_checking(close(file_to) < 0, 100, "Error: Can't close fd ");

	return (0);
}
