#include "main.h"
/**
*more_numbers - outputs ten times number from 0 to 14
*Return: no value
*/
void more_numbers(void)
{
int j = 0;
int i;

while (j <= 10)
{
for (i = 0; i < 15; i++)
{
if (i > 9)
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
_putchar('\n');
j++;
}
}
