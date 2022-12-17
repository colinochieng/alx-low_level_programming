#include <stdio.h>

#include <stdio.h>
/**
*print_to_98 -function for printing numbers towards 98
*
*@n: holding variable
*
*Return: no value
*/
void print_to_98(int n)
{
if (n <= 98)
{
while (n <= 98)
{
printf("%d", n);
if (n < 98)
putchar(' ');
putchar(',');

n++;
}
putchar('\n');
}
else if (n >= 98)
{
while (n >= 98)
{
printf("%d", n);
if (n > 98)
putchar(' ');
putchar(',');

n--;
}
}

}
