#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at index index of a listint_t
* linked list
* @head: pointer to pointer to head of list
* @index: index of the node that should be deleted
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *temp;
	unsigned int count = 0;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		if (*head == NULL)
			return (-1);

		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (current != NULL && count < index - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
