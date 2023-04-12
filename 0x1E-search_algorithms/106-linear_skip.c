#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include<math.h>


int min(int a, int b)
{
	if (b > a)
	    return a;
	else
		return b;
}


skiplist_t *jump(skiplist_t *list, size_t high, size_t lowt)
{
	skiplist_t *low = list;
	size_t j = lowt;
	
	while (j < high)
	{
		if (low == NULL)
			return (NULL);
		low = low -> next;
		j++;
	}
	return low;
}

/**
 * linear_search - searches for a value in an array of integers
 * @array: a pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: Always EXIT_SUCCESS
 */
skiplist_t *linear_searc(skiplist_t *list, skiplist_t *size, int value, skiplist_t *low)
{
	skiplist_t *ind =  low;
	skiplist_t *array = list;

	if (array == NULL || ind == NULL)
		return (NULL);

	while (ind->index <= size->index)
	{
		printf("Value checked array[%lu] = [%d]\n", ind->index, ind->n);
		if (ind->n == value)
			break;
		ind = ind -> next;
		if (ind == NULL)
			break;
		
	}
	return ind;
}

/**
 * jump_searc - searches for a value in an array of integers
 * @array: a pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: Always EXIT_SUCCESS
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *now = list;
	skiplist_t *next = list -> express;
	
	if (list == NULL)
		return (NULL);

	while (next -> n < value)
	{
		printf("Value checked array[%lu] = [%d]\n", (next -> index), (next -> n));
		now = next;
		next = next -> express;
		
		if (next -> express == NULL)
			break;
	}
	printf("Value checked array[%lu] = [%d]\n", (next -> index), (next -> n));
	printf("Value found between indexes[%lu] and [%lu]\n", now -> index,  next -> index);
	now = linear_searc(list, next, value, now);
	return now;
}
