#include "main.h"

/**
* create_array - creates an array of chars, and initializes it with a
* specific char
* @size: size of array
* @c: character to initialize array with
*
* Return: pointer to array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *arr = NULL;

	if (size == 0)
	{
		return (NULL);
	}

	*arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}

	for (i = 0; i < size; i++)

	{
		arr[i] = c;
	}

	return (arr);
}
