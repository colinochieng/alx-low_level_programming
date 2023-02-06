#include "main.h"

/**
*print_binary - prints the binary representation of a number
*@n: integer
*Return: void
*/

void print_binary(unsigned long int n)
{
	unsigned int base = 1, value = n;
	int len;

	for (len = 0; value > 1; len++)
		value >>= 1;

	if (len > 0)
		base <<= len;

	while (base > 0)
	{
		if (n & base)
			_putchar('1');
		else
			_putchar('0');
		base >>= 1;
	}

}
