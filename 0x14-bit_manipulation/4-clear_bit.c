#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: number to be evaluated
* @index: index of the bit to be cleared
*
* Return: 1 if it worked, or -1 if an error occured
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 63)
		return (-1);
	mask <<= index;
	*n &= ~mask;
	return (1);
}
