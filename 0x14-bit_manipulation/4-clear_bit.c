#include "main.h"

/**
*clear_bit - sets the value of a bit to 0 at a given index
*@n: integer
*@index: position
*Return: 1 if it worked, or -1 if an error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int value;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	/*Creating position*/
	value = 1UL << index;

	/*Setting value*/
	*n &= ~value;

	return (1);
}
