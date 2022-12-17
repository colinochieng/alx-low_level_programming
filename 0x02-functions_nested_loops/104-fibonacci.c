#include <stdio.h>
/**
*main - prints the first 98 fibonaccis numbers
*
*Return: 0
*/

int main(void)
{
int  rate;
unsigned long  first_num, second_num, value;
rate = 0;
first_num = 0;
second_num = 1;

while (rate <= 97)
{
value = first_num + second_num;
//printf("%lu", value);
first_num = second_num;
second_num = value;

if (rate < 93)
{
printf("%lu", value);
putchar(',');
putchar(' ');
}
if (rate >= 93 && rate <= 96)
{
putchar('0');
printf("%lu", value);
putchar(',');
putchar(' ');
}
else if (rate == 97)
{
    putchar('0');
    printf("%lu", value);
    putchar('\n');
}
rate++;
}
return (0);

}
