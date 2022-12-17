#include "main.h"
/**
*main - outputs _putchar
*
*Description: 'use while loop'
*
*Return: 0
*/
int main(void)
{
	char word[8] = "_putchar";
	int letter = 0;

	while (letter < 8)
	{
		_putchar(word[letter]);
		letter++;
	}
	_putchar('\n');
	return (0);
}

