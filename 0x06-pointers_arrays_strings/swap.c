#include "main.h"

/**
* swap - swaps the values of two integers
* @a: first integer
* @b: second integer
*/
void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
