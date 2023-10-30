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

	size_t len_str = strlen(str);

	arr = (char *)malloc(sizeof(char) * len_str);

	strcpy(arr, str);

	return (arr);
}
