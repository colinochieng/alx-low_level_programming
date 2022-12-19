#include "main.h"
/**
 * _puts - Prints a string
 *
 * @str: string parameter
 *Return: no value
 */
void _puts(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
}
