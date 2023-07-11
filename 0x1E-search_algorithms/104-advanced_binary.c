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
 * search_binary_recur - function that searches for a
 * value in a sorted array of integers recursively
 * @array:  is a pointer to the first element of the array to search in
 * @low: low index
 * @high: high index
 * @value: target value
 * Return: index of value or -1
*/
int search_binary_recur(int *array, int low, int high, int value)
{
	int index = -1;
	int mid = (low + high) / 2;

	printf("Searching in array: ");
	print_array(array, low, high);

	if (array[mid] == value)
	{
		if ((mid - 1) >= 0 && array[mid - 1] == value)
		{
			high = mid;
			index = search_binary_recur(array, low, high, value);
		}
		if (index >= 0)
			return (index);
		return (mid);
	}
	if (low == high)
		return (-1);

	if (array[mid] < value)
		low = mid + 1;
	else
		high = mid - 1;

	return (search_binary_recur(array, low, high, value));
}

/**
 * advanced_binary - a function that searches for
 * a value in a sorted array of integers.
 * @array: pointer to the first element of the array to search in
 * @size: size is the number of elements in array
 * @value: target to search for
 * Return:  the index where value is located
 * -1 If value is not present in array or if array is NULL
 * array will be sorted in ascending order
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (search_binary_recur(array, 0, size - 1, value));
}
