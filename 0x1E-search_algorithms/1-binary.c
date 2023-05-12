#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in an array using the
 * binary search algorithm
 *
 * @array: pointer to first element of the array
 * @size: the size of the array
 * @value: value to search for
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left = 0, right = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array:");
		for (i = left; i <= right; i++)
		{
			printf("%d\n", array[i]);
			if (i < right)
				printf(", ");

			if (i == right)
				printf("\n");
		}
		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
