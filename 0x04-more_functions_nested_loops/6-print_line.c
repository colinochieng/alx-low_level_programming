#include "main.h"

/**
 * print_line - prints lines
 *
 * @n: value for line length
 *
 * Return: no value
 */


void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
