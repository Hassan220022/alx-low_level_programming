#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int i = 0;

	mask <<= 63;
	while (mask > 0)
	{
		if ((n & mask) == 0)
		{
			if (i == 1)
				_putchar('0');
		}
		else
		{
			_putchar('1');
			i = 1;
		}
		mask >>= 1;
	}
	if (i == 0)
		_putchar('0');
}
