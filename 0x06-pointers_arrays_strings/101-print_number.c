#include "main.h"
/**
* print_number - prints an integer
* @n:arguments place holder
*Return: no value
**/
void print_number(int n)

{
int int_number = n;

if (n < 0)
{
_putchar('-');
int_number = -int_number;
}

if (int_number / 10)
{
print_number(int_number / 10);
}

_putchar((int_number % 10) + '0');

}
