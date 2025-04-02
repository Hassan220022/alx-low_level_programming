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
 * recursive_binary - Recursively search for first occurrence
 * @array: Array to search in
 * @left: Left index
 * @right: Right index
 * @value: Value to search for
 *
 * Return: Index of first occurrence of value, or -1 if not found
 */
int recursive_binary(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (right < left)
		return (-1);

	print_array(array, left, right);

	mid = left + (right - left) / 2;

	if (array[mid] == value && (mid == left || array[mid - 1] != value))
		return (mid);
	else if (array[mid] >= value)
		return (recursive_binary(array, left, mid, value));
	else
		return (recursive_binary(array, mid + 1, right, value));
}

/**
 * advanced_binary - Finds first occurrence in sorted array
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index of first occurrence of value, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (recursive_binary(array, 0, size - 1, value));
}

