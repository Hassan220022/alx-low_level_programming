#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list
 * @list: Pointer to the head of the skip list to search in
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current = list;
	skiplist_t *prev = NULL;

	if (list == NULL)
		return (NULL);

	while (current != NULL && current->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]
",
			current->index, current->n);
		prev = current;

		if (current->express != NULL)
			current = current->express;
		else
		{
			while (current->next != NULL)
				current = current->next;
			break;
		}
	}

	printf("Value found between indexes [%lu] and [%lu]
",
		prev ? prev->index : 0,
		current ? current->index : 0);

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

