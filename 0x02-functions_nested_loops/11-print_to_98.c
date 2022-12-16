#include <stdio.h>

void print_to_98(int n)
{
n <= 98;
while(n<=98)
{
printf("%d", n);
if (n < 98)
putchar(',');


n++;
}
putchar('\n');

n >= 98;
while (n >=98)
{
printf("%d", n);
if (n > 98)
putchar(',');



n--;
}

putchar('\n');
}

int main(void)
{
print_to_98(0);
print_to_98(98);
print_to_98(111);
print_to_98(81);
print_to_98(-10);
return (0);
}
