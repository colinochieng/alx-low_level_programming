#include "main.h"
/**
* print_diagonal - outputs diagonal
*
*@n: parameter
*
* Return: a diagonal
*/

void print_diagonal(int n)
{
int a, b;
a = 0;
if (n > 0)
{
while (a < n)
{
b = 0;
while (b < n)
{
if (a == b)
{
_putchar('\\');
}
else if (a > b)
{
_putchar(' ');
}
else
{
break;
}
b++;
}
_putchar('\n');
a++;
}
}
else
{
_putchar('\n');
}
}
