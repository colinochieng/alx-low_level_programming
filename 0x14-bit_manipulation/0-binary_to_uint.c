#include "main.h"

/**
*binary_to_uint - converts a binary number to an unsigned int
*@b: pointer to a string of 0 and 1 chars
*Return: the converted number, or 0 if
*there is one or more chars in the string b that is not 0 or 1
*b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	unsigned int base = 1;
	int i, len;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
		;
	i -= 1;

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			decimal += base;

		base *= 2;
		i--;
	}
	return (decimal);
}
