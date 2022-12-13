#include "main.h"
/**
 *print_alphabet_x10 - outputs alphabets 10*
 *
 * Description: 'use nested while loops'
 *
 * Return : 0
 */
void print_alphabet_x10(void)
{
	int reprint = 0;
	int alphabets;

	while (reprint <= 9)
	{
		alphabets = 'a';

		while (alphabets <= 'z')
		{
			_putchar(alphabets);
			alphabets++;
		}
		_putchar('\n');
		reprint++;
	}
}
