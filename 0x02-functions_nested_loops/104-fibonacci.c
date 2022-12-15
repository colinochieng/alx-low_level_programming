#include <stdio.h>

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
printf("%lu",value);
first_num = second_num;
second_num = value;
if (rate < 97)
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
