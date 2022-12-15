#include <stdio.h>

/**
 * main - prints 50 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
unsigned long  first_num, second_num, value;
int rate = 0;

first_num = 0;
second_num = 1;

while (rate <= 4)
{
value = first_num + second_num;
printf("%lu", value);
first_num = second_num;
second_num = value;
if (rate < 49)
{
putchar(',');
putchar(' ');
}
else

putchar('\n');

rate++;
}
return (0);
}

