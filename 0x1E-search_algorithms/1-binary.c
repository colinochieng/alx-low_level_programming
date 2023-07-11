#include "search_algos.h"

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
 * binary_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: size is the number of elements in array
 * @value: target to search for
 * Return:  the index where value is located
 * -1 If value is not present in array or if array is NULL
 * array will be sorted in ascending order
*/
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t mid = 0;

	if (!array)
		return (-1);
	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		print_array(array, low, high);
		if (array[mid] == value)
			return ((int) mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
