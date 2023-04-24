#include "main.h"

/**
*print_buffer - function that prints a buffer
*@b: buffer
*@size: buffer size
*If size is 0 or less, the output should be a new line only \n
*/
void print_buffer(char *b, int size)
{
	int i, j, k, l;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		if ((size - i) < 10)
			j = size - i;
		else
			j = 10;
		printf("%08X: ", i);

		for (k = 0; k < 10; k++)
		{
			k < j ? printf("%02X", b[i + k]) : printf("  ");

			if (k % 2)
				printf(" ");
		}

		for (k = 0; k < j; k++)
		{
			l =  b[i + k];

			if (l < 32 || l > 132)
				l = '.';
			printf("%c", l);
		}
		printf("\n");
	}
}
