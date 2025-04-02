#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list using jump search
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in list
 * @value: Value to search for
 *
 * Return: Pointer to the first node containing value, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t i;
	listint_t *current = list;
	listint_t *prev = NULL;

	if (list == NULL)
		return (NULL);

	while (current != NULL && current->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]
",
			current->index, current->n);
		prev = current;

		for (i = 0; i < jump && current->next != NULL; i++)
			current = current->next;
	}

	printf("Value found between indexes [%lu] and [%lu]
",
		prev ? prev->index : 0,
		current ? current->index : size - 1);

	current = prev;
	while (current != NULL && current->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]
",
			current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}

	return (NULL);
}

