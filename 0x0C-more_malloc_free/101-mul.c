#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if a string is a number
 * @str: string to check
 *
 * Return: 1 if true, 0 if false
 */
int is_number(char *str)
{

	for (int i = 0; str[i] != '\0'; i++)

	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if success, 98 if failure
 */
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	int num1 = atoi(argv[1]);

	int num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}
