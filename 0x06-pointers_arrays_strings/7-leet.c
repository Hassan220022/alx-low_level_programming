#include "main.h"

/**
* leet - encodes a string into 1337
* @str: string to encode
*
* Return: pointer to the resulting string
*/
char *leet(char *str)
{
	int i, j;

	char *result = str;

	char *letters = "aAeEoOtTlL";

	char *leet_chars = "4433007711";

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
