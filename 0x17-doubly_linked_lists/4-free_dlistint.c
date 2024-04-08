#include "lists.h"

/**
 * free_dlistint - free up the list
 * @head: Is the pointer to node structure
 * Return: NULL
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;

	for (; head != NULL;)
	{
		h = head->next;
		free(head);
		head = h;
	}
}
