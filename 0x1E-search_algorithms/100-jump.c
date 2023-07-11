#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: size is the number of elements in array
 * @value: target to search for
 * Return:  the index where value is located
 * -1 If value is not present in array or if array is NULL
 * array will be sorted in ascending order
*/

int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0, curr = 0;
	size_t step = sqrt(size);

	if (!array || size == 0)
		return (-1);

	while (curr < size && array[curr] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", curr, array[curr]);
		prev = curr;
		curr += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, curr);
	curr = curr > size - 1 ? curr : size - 1;

	while (prev < curr  && array[prev] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (value > array[curr])
			break;
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
