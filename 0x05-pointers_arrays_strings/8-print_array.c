#include "main.h"

/**
 * print_array - prints array of intergers
 *
 * @a: first parameter
 * @n: second parameter
 *
 * Return: no value
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i <= n - 2)
			printf("%d, ", a[i]);
		if (i == n - 1)
			printf("%d", a[i]);

		i++;
	}

	printf("\n");
}
