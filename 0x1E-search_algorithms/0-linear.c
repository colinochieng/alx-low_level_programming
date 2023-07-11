#include "search_algos.h"

/**
 * linear_search - function that searches for a value
 * in an array of integers using the Linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: to search for
 * Return: first index where value is located or
 * -1 (If value is not present in array or if array is NULL)
*/

int linear_search(int *array, size_t size, int value)
{
	size_t trav = 0;

	if (!array)
		return (-1);

	while (trav < size)
	{
		printf("Value checked array[%ld] = [%d]\n", trav, array[trav]);
		if (array[trav] == value)
			return ((int)trav);
		trav++;
	}
	return (-1);
}
