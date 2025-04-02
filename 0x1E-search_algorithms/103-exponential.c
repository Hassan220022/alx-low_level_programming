#include "search_algos.h"

/**
 * print_array - Prints the array being searched
 * @array: Array to print
 * @left: Left index
 * @right: Right index
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("
");
}

/**
 * binary_search_exp - Binary search within a range
 * @array: Array to search in
 * @left: Left index
 * @right: Right index
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int binary_search_exp(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value using exponential search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t right;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]
", bound, array[bound]);
		bound *= 2;
	}

	right = (bound < size) ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]
", bound / 2, right);

	return (binary_search_exp(array, bound / 2, right, value));
}

