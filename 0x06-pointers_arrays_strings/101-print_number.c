#include "main.h"
/**
* print_number - prints an integer
* @n: integer to print
*
* Return: void
*/
void print_number(int n)
{
	int divisor = 1;

	int digit;

	int is_negative = 0;

	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}

	while (n / divisor >= 10)
	{
		divisor *= 10;
	}

	if (is_negative)
	{
		_putchar('-');
	}

	while (divisor > 0)
	{
		digit = (n / divisor) % 10;
		_putchar(digit + '0');
		divisor /= 10;
	}

}
