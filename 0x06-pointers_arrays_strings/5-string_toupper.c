#include "main.h"
#include "2-strlen.c"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: string to be changed
 *
 * Return: pointer to the resulting string
 */
char *string_toupper(char *s)
{
	int i;

	int len = _strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}
	return (s);
}

