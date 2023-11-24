#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 *
 * Return: no return
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;

	int bit_count = sizeof(unsigned long int) * 8;

	for (int i = 0; i < bit_count; i++)

	{
		if (n & mask)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		mask <<= 1;
	}
}
