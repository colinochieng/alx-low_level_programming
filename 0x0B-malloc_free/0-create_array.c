#include "main.h"
#include <stdlib.h>

/**
*create_array - a function that creates an array of chars
* initializes it with a specific char
*@size: size of memory to allocate
*@c: character parameter
*Return: pointer to an array or NULL
*/

char *create_array(unsigned int size, char c)
{
	unsigned int iter;
	char *ch_ptr;


	if (size == 0)
		return (0);
	
	ch_ptr = malloc(sizeof(char) * size);
	if (ch_ptr == 0)
		return (0);

	while (iter < size)
	{
		ch_ptr[iter] = c;
		iter++;
	}

	return (ch_ptr);
}
	
