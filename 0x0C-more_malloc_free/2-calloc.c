#include "main.h"

/**
* _calloc - allocates memory for an array, using malloc
* @nmemb: number of elements in the array
* @size: size of the elements
*
* Return: pointer to allocated memory, NULL if it fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
