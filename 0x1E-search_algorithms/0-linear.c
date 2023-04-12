#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: a pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: Always j
 */
int linear_search(int *array, size_t size, int value)
{
	size_t j = 0;

	if (array == NULL)
	{
		return (-1);
	}
	while (j < size)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
		{
			break;
		}
		j++;
	}
	if (j == size)
		return (-1);
	else
		return (j);
}
