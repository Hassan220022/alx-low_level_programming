#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: Is the pointer to node structure
 * @index: Is the index of the node
 * Return: node with the selected index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{

		if (count == index)
			return (current);

		current = current->next;
		count++;
	}

	return (NULL);
}
