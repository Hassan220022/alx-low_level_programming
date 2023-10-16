#include "main.h"
#include "2-strlen.c"
/**
* _strcpy - copies the string pointed to by src
* @dest: string to be appended to
* @src: string to append
*
* Return: pointer to the resulting string dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = _strlen(src), j;


	for (j = 0; j < i; j++)
		dest[j] = src[j];
	dest[j] = '\0';
	return (dest);
}
