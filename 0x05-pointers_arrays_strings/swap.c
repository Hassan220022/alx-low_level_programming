#include "main.h"

/**
 * swap_char- swaps the values of two char
 * @a: pointer to an char
 * @b: pointer to an char
 *
 * Return: void
 */

void swap(char *a, char *b)
{
	char temp = *a;

	*a = *b;
	*b = temp;
}
