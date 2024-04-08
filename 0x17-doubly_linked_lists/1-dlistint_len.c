#include "lists.h"
/**
 * dlistint_len - Prints number of the elements in list
 * @h: Is the pointer to node structure
 * Return: the amount of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
