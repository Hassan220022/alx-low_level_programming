#include "search_algos.h"

/**
 * interpolation_search - Searches for a value using interpolation search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;
	double formula;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			printf("Value checked array[%lu] = [%d]
", low, array[low]);
			if (array[low] == value)
				return (low);
			return (-1);
		}

		formula = (double)(high - low) / (array[high] - array[low]);
		pos = low + (formula * (value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range
", pos);
			return (-1);
		}

		printf("Value checked array[%lu] = [%d]
", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}

