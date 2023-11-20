#include "lists.h"

/**
 * last_node - returns the last node of a list_t list
 * @head: pointer to the head of the list
 *
 * Return: the last node of the list
 */
list_t *last_node(list_t *head)
{
	if (head == NULL)
		return (NULL);

	list_t *current = head;

	while (current->next != NULL)
	{
		current = current->next;
	}

	return (current);
}
