#include "lists.h"

/**
* print_listint - Function to print all the elements of a listint_t list
* @h: Pointer to the head of the list
* Return: The number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->n == '\0')
		{
			printf("0\n");
		}
		else
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		count++;
	}
	return (count);
}
