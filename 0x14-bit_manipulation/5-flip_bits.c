#include "main.h"

/**
*flip_bits - finds number of bits needed to be fliped
*@n: first integer
*@m: second integer
*Return: number of bits you would need to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int flip_bits = 0;

	while (xor)
	{
		flip_bits += xor & 1;
		xor >>= 1;
	}

	return (flip_bits);
}
