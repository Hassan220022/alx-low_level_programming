#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using jump search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t left = 0;
	size_t right = jump;

	if (array == NULL)
		return (-1);

	while (right < size && array[right] <= value)
	{
		printf("Value checked array[%lu] = [%d]
", left, array[left]);
		left = right;
		right += jump;
	}

	printf("Value found between indexes [%lu] and [%lu]
", left, right);

	while (left <= right && left < size)
	{
		printf("Value checked array[%lu] = [%d]
", left, array[left]);
		if (array[left] == value)
			return (left);
		left++;
	}

	return (-1);
}

