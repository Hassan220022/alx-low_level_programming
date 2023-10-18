#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 *
 * Return: pointer to the resulting string
 */
char *rot13(char *str)
{
	int i, j;

	char *result = str;

	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char *leet_chars = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; result[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (result[i] == letters[j])
			{
				result[i] = leet_chars[j];
				break;
			}
		}
	}

	return (result);
}
