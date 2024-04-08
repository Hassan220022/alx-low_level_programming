#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a new node at index
 * @h: pointer to a pointer to the head of the list
 * @idx: index of the node in the list
 * @n: value to be stored in the new node
 * Return: address of the new list, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node = *h;
	dlistint_t *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		if (current_node == NULL)
		{
			return (NULL);
		}
		current_node = current_node->next;
	}
	if (current_node->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = current_node->next;
	new_node->prev = current_node;
	current_node->prev->next = new_node;
	current_node->next = new_node;
	return (new_node);
}
