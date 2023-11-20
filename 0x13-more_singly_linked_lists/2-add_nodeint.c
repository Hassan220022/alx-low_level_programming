#include "lists.h"

/**
* add_nodeint - Function to add a new node at the beginning of a list
* @head: Double pointer to the head of the list
* @n: Integer to add to the list
* Return: The address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
