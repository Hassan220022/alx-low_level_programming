#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to copy
 *
 * Return: pointer to new string, or NULL if str = NULL or insufficient memory
 */
char *_strdup(char *str)
{
	char *arr = NULL;

	int len_str = 0, i = 0;

	while (*str != '\0')
	{
		len_str++;
		str++;
	}
	arr = (char *)malloc(sizeof(char) * len_str);

	while (str[i] != '\0')
	{
		arr[i] = str[i];
		i++;
	}
	return (arr);
}
