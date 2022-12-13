#include "main.h"
/**
 * print_alphabet - prints alphabets in lower case
 *
 * Description: uses while loop
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
