#include "main.h"
/**
 * print_most_numbers -function for printing numbers btw 0 and 9 except two
 * Return: numbers
 */
void print_most_numbers(void)
{
int numbers = '0';

while (numbers <= '9')
{
if  (numbers != '2' &&  numbers != '4')
{
_putchar(numbers);
}
numbers++;
}
_putchar('\n');
}
