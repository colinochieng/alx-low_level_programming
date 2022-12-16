#include "main.h"
/**
 * print_numbers - function for numbers  btw 0 and 9
 *
 * Return: numbers
 */
void print_numbers(void)
{
	int numbers = '0';

	while (numbers <= '9')
	{
		_putchar(numbers);
		numbers++;
	}
	_putchar('\n');
}
