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
	int len_s1, len_s2, i, j;

	char *arr;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
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
	arr[len_s1] = ' ';
	for (i = len_s1, j = 0; i < len_s1 + len_s2; i++, j++)
	{
		arr[i] = s2[j];
	}
	return (arr);
}
