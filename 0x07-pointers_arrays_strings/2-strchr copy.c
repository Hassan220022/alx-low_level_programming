#include "main.h"

/**
* _strchr - locates a character in a string
* @s: string to search
* @c: character to search for
*
* Return: pointer to first occurrence of c in s, or NULL if not found
*/
char *_strchr(char *s, char c)
{
	int i = 0, j = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			j = 1;
			break;
		}
	}

	if (j == 1)
		return (&s[i]);
	else
		return (NULL);
}
