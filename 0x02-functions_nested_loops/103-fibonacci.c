#include <stdio.h>
/**
*main - print sum of even fibonacci < 4000000
*Return: (0)
*/

int main(void)
{
int  rate;
unsigned long  first_num, second_num, value, sum;
rate = 0;
first_num = 0;
second_num = 1;
sum = 0;

while (rate <= 49)
{
value = first_num + second_num;
first_num = second_num;
second_num = value;

if (value <= 4000000)
{
if (value % 2 == 0)
{
sum = value + sum;
}
}

rate++;
}
printf("%lu", sum);

return (0);
}
