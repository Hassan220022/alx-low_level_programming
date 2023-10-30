#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of pointers to the strings
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;

	while (argv[0][i] != '\0')
		i++;
	printf("%d\n", i);
	return (0);
}
