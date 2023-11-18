#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: pointer to the head of the list
* @str: string to be added to the list
*
* Return: address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node = last_node(head);
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
