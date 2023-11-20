#include "lists.h"

/**
* add_nodeint_end - Function to add a new node at the end of a list
* @head: Double pointer to the head of the list
* @n: Integer to add to the list
* Return: The address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *temp = NULL;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	temp = *head;
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	return (*head);
}
