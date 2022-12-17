#include <stdio.h>

/**
* main -  prints the first 98 fibonaccis numbers
*
* Return:  0
*/
int main(void)
{
int rate;
unsigned long first_num = 0, second_num = 1, value;
unsigned long n1, n2, n3, n4;
unsigned long h1, h2;
rate = 0;
while (rate < 92)
{
value = first_num + second_num;
printf("%lu, ", value);

first_num = second_num;
second_num = value;
rate++;
}

n1 = first_num / 10000000000;
n3 = second_num / 10000000000;
n2 = first_num % 10000000000;
n4 = second_num % 10000000000;

rate = 93;
while (rate < 99)
{
h1 = n1 + n3;
h2 = n2 + n4;
if (n2 + n4 > 9999999999)
{
h1 = h1 + 1;
h2 = h2 + 10000000000;
}

printf("%lu%lu", h1, h2);
if (rate != 98)
putchar(',');
putchar(' ');

n1 = n3;
n2 = n4;
n3 = h1;
n4 = h2;

rate++;
}
putchar('\n');
return (0);
}
