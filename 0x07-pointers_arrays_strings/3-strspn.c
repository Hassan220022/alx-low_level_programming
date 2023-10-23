#include "main.h"
#include <stdlib.h>
/**
* _strspn - gets the length of a prefix substring
* @s: string to search
* @accept: string containing characters to match
*
* Return: number of bytes in the initial segment of s which consist only of
* bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	unsigned int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
					break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (counter);
}
