#include "main.h"

/**
 * print_number - outputs intergers
 * @n:arguments place holder
 *Return: no value
 **/

void print_number(int n)

{
	unsigned int interger = n;

	if (n < 0)
	{
		_putchar('-');
		interger = -interger;
	}

	if (interger / 10)
	{
		print_number(interger / 10);
	}

	_putchar(interger % 10 + '0');

}
