#include "main.h"

/**
* leet - encodes a string into 1337
* @s: string to encode
*
* Return: the resulting string
*/
char *leet(char *s)
{
	char *result = s;

	int i = 0;

	while (result[i] != '\0')
	{
		while (result[i] == 'a' || result[i] == 'A')
			result[i] = '4', i++;
		while (result[i] == 'e' || result[i] == 'E')
			result[i] = '3', i++;
		while (result[i] == 'o' || result[i] == 'O')
			result[i] = '0', i++;
		while (result[i] == 't' || result[i] == 'T')
			result[i] = '7', i++;
		while (result[i] == 'l' || result[i] == 'L')
			result[i] = '1', i++;
		i++;
	}
	return (result);
}
