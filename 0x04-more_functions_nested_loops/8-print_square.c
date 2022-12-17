#include "main.h"

/**
 * print_square - output square
 *
 * @size: parameter
 *
 * Return: no value
 */


void print_square(int size)
{
	int height, width;

	if (size <= 0)
		_putchar('\n');

	height = 0;
	while (height < size)
	{
		width = 0;
		while (width < size)
		{
			_putchar('#');
			 width++;
		}
		_putchar('\n');
		 height++;
	}

}
