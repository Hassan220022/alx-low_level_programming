#include "lists.h"

/**
 * print_dlistint - print all the elements of dlistint_t
 *
 * Return: : the number of nodes.
 * @h: header of the list
 */
size_t print_dlistint(const dlistint_t *h)
{

	int counter = 0;

	for (; h != NULL;)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
