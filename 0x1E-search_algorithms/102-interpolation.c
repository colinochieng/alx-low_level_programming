#include "search_algos.h"

/**
 * interpolation_search - a function that searches for a value in
 * a sorted array of integers using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: size is the number of elements in array
 * @value: target to search for
 * Return:  the index where value is located
 * -1 If value is not present in array or if array is NULL
 * array will be sorted in ascending order
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos = 0;
	double fraction;

	if (!array)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		fraction = (double)(high - low) / (array[high] - array[low]);
		pos = low + fraction * (value - array[low]);

		printf("Value checked arrayi[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low += pos + 1;
		else if (array[pos] > value)
			high -= pos + 1;
		else
			return (pos);
	}
	fraction = ((double)(high - low) / (array[high] - array[low]));
	pos = low + fraction * (value - array[low]);
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}

