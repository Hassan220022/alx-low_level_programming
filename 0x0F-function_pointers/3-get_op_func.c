#include "3-calc.h"

/**
* get_op_func - selects the correct function to perform the operation
* @s: operator passed as argument to the program
*
* Return: pointer to the function that corresponds to the operator given
* or NULL if no matches are found
*/
int (*get_op_func(char *s))(int, int)
{
	int i;

	if (s == NULL)
		return (NULL);

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
	}

	printf("Error\n");
	exit(99);
}
