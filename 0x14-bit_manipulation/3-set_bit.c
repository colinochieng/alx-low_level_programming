#include "main.h"

/**
*set_bit - sets the value of a bit to 1 at a given index
*@n: integer
*@index: position to set 1
*Return: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	/*creating value at an index*/
	value = 1UL << index;

	/*setting value at an index*/
	*n |= value;

	return (1);
}
