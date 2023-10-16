#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: pointer to the string to print
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
}
