#include "stdio.h"

/**
 * print_array - function to print ratio of an array
 * @start: starting point
 * @end: ending point
 * @array: pointer tonthe first element of an array
*/
void print_array(int *array, int start, int end)
{
	while (start <= end)
	{
		if (start != end)
			printf("%d, ", array[start]);
		else
			printf("%d\n", array[start]);
		start++;
	}
}

/**
 * exponential_search - function that searches for a value in
 * a sorted array of integers using the Exponential search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: target
 * Return:  the index where value is located
 * -1 If value is not present in array or if array is NULL
 * array will be sorted in ascending order
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, high;
	size_t low = 0, mid;

	if (!array)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		low = bound;
		bound *= 2;
	}
	high = (bound + 1) > size ? size - 1 : bound;
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		print_array(array, low, high);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
