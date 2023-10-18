#include "main.h"
#include "swap.c"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
*/
void reverse_array(int *a, int n)
{
	int i = 0;

	int j = n - 1;

	while (i < j)
	{
		swap(&a[i], &a[j]);
		i++;
		j--;
	}
}

