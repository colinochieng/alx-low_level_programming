#include "main.h"
/**
 * swap_int - changes the value of teo intergers
 *
 * @a: first argument pointer
 * @b: second argument pointer
 *
 * Return: no value
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
