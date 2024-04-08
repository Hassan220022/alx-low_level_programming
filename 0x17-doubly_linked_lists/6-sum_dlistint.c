#include "lists.h"

/**
 * sum_dlistint - sum all the values of the list
 * @head: Is the pointer to node structure
 * Return: value of the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head != NULL; head = head->next)
	{
		sum += head->n;
	}
	return (sum);
}
