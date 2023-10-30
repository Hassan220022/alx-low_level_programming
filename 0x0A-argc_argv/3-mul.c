#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the multiplication of two numbers
* @argc: number of arguments
* @argv: array of pointers to the strings
* Return: 0
*/
int main(int argc, char *argv[])
{
	int z, b, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	z = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = z * b;

	printf("%d\n", mul);
	return (0);
}
