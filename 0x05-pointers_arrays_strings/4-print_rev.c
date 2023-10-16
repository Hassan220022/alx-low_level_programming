#include "main.h"
#include "_putchar.c"
#include "2-strlen.c"
/**
* print_rev - prints a string, in reverse, followed by a new line.
* @s: string to be printed.
*
* Return: void.
*/
void print_rev(char *s)
{
	int i = 0;

	i = _strlen(s);
	i--;
	for (; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
