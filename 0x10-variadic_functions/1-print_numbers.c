#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			if (i != (n - 1))
				printf("%d%s", va_arg(ap, int), separator);
			else
				printf("%d", va_arg(ap, int));
		}
		else
			printf("%d", va_arg(ap, int));
	}
	va_end(ap);

	printf("\n");
}
