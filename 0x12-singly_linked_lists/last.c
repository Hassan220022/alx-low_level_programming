#include "lists.h"

/**
* last_node - returns the last node of a list_t list
* @head: pointer to the head of the list
*
* Return: the last node of the list
*/
list_t *last_node(list_t **head)
{
	while (head != NULL)
	{
		head = &(*head)->next;
	}
	return (*head);
}
