#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: string to be appended to
* @src: string to append
*
* Return: pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int len1 = _strlen(dest), len2 = _strlen(src);
	int i;

	for (i = 0; i < len2; i++)
	{
		dest[len1 + i - 1] = src[i];
	}
	dest[len1 + i] = '\0';
	return (dest);
}
