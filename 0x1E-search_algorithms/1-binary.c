#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary - searches for a value in an array of integers
 * @array: a pointer to the first element of the array
 * @low: low of elements in array
 * @high: high of elements in array
 * @value: the value to search for
 *
 * Return: int
 */
int binary(int *array, int value, int low, int high)
{
	size_t mid = (low + high) / 2;
	int loop;
	int j;

	if (high < low)
		return (-1);
	printf("Searching in array: ");
	for (loop = low; loop <= high; loop++)
	{
		printf("%d", array[loop]);
		if (loop <= (high - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
		high = mid - 1;
	else
		low = mid + 1;
	j = binary(array, value, low, high);
	return (j);
}

/**
 * binary_search - searches for a value in an array of integers
 * @array: a pointer to the first element of the array
 * @size: low of elements in array
 * @value: the value to search for
 *
 * Return: int
 */
int binary_search(int *array, size_t size __attribute__((unused)), int value)
{
	int j;

	if (array == NULL)
		return (-1);
	j = binary(array, value, 0, size - 1);
	return (j);
}
