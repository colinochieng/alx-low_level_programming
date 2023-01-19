#include "function_pointers.h"

/**
*int_index - function that searches for an integer
*@array: pointer to array of intergers
*@size: size of pointed array
*@cmp: pointer to function
*Return: index of interger or -1 on failure at points
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (cmp != NULL && array != NULL)
	{
		i = 0;

		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}

	return (-1);
}
