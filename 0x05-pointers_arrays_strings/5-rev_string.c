#include "main.h"
#include <stdlib.h>
#include "2-strlen.c"
#include "swap.c"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len, i;

	len = _strlen(s);

	for (i = 0; i < len - 1; i++)
	{
		swap(&s[i], &s[len - 1 - i]);
	}
}

