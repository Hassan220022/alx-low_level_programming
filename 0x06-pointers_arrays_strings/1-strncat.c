#include "main.h"
#include "2-strlen.c"
/**
* _strncat - concatenates two strings
* @dest: string to be appended to
* @src: string to append
* @n: number of bytes to be used from src
*
* Return: pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest), src_len = _strlen(src);

	int i;

	for (i = 0; i < n && src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
