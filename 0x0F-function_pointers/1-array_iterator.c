#include "function_pointers.h"

/**
*array_iterator -  executes a function given as a paramete
*@array: the passed array
*@size: size of array
*@action: function pointer
*Return: no value (void)
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((action != NULL) && (array != NULL))
	{
		i = 0;

		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
