#include "main.h"

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
*
* Return: pointer to concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	int len_s1, len_s2;

	char *arr;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	arr = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (arr == NULL)
	{
		printf("Error: Insufficient memory\n");
		return (NULL);
	}
	strcpy(arr, s1);
	strcpy(arr + len_s1, s2);
	return (arr);
}
