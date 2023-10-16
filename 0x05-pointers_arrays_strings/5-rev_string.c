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
	int len = _strlen(s);

	int i, y;

	y = len - 1;

	for (i = 0; i < y; i++, y--)
	{
		swap(&s[i], &s[y]);
	}
}

