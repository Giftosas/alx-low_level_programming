#include "search_algos.h"

/**
 * linear_search - goes through each element of the array
 * @array: to search through
 * @size: of the array
 * @value: to look for
 *
 * Return: the index at which the value is found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
