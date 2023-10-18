#include "main.h"
#include "2-strlen.c"
/**
* _strcat - concatenates two strings
* @dest: string to be appended to
* @src: string to append
*
* Return: pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int initial_end;
	int j;

	initial_end = _strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[initial_end + j] = src[j];
		j++;
	}
	dest[initial_end + j] = '\0';

	return (dest);
}
