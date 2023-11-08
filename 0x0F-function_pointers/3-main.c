#include "3-calc.h"

/**
* main - performs simple operations
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 if successful, 1 if error
*/
int main(int argc, char *argv[])
{
	int num1, num2, result;

	int (*operator_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator_func = get_op_func(argv[2]);

	if (operator_func == NULL)
	{
		printf("Error\n");
		return (1);
	}

	result = operator_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
