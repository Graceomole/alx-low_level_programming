#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: a pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: Always EXIT_SUCCESS
 */
int interpolation_searc(int *array, size_t size, int value, int high, int low)
{
	size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
	if (low <= high && array[low] <= value && high >= low && array[high] >= value)
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			return (pos);
		}
		else if (array[pos] > value)
			return interpolation_searc(array, size, value, pos -1 , low);
		else if (array[pos] < value)
			return interpolation_searc(array, size, value, high, pos + 1);
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
int interpolation_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return interpolation_searc(array, size, value, size - 1, 0);
}
