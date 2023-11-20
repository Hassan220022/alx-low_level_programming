#include <stdlib.h>
#include "lists.h"

/**
* free_listint_safe - frees a listint_t list
* @h: pointer to pointer to head of list
* Return: number of nodes in the list
*/
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp, *current;

	temp = *h;
	while (temp != NULL)
	{
		count++;
		current = temp;
		temp = temp->next;
		free(current);
	}

	*h = NULL;
	return (count);
}
