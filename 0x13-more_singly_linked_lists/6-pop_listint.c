#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: pointer to pointer to head of list
* Return: head node's data (n)
*/
int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	current = *head;
	n = current->n;
	*head = current->next;
	free(current);
	return (n);
}
