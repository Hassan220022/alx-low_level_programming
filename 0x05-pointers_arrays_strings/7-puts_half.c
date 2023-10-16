#include "main.h"
#include "2-strlen.c"
/**
* puts_half - prints half of a string, followed by a new line.
* @str: string to be printed.
*
* Return: void.
*/
void puts_half(char *str)
{
	int i = 0, j;

	i = _strlen(str);
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
     