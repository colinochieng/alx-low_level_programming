#include "main.h"

/**
*_pow_recursion - finds power of a number
*@x: value to find powre
*@y: exponent
*Return: 1 or -1
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	y--;

	return (x * _pow_recursion(x, y));
}
