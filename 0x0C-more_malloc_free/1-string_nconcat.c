#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate to s1
 *
 * Return: pointer to new string, NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, len2, i, j;

	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, s1);
	strcpy(ptr + len1, s2);
	ptr[len1 + n] = '\0';
	return (ptr);
}
