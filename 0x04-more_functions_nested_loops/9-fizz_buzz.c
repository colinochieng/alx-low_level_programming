#include <stdio.h>

int main (void)
{
int i = 1;
while (i <= 100)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
putchar(' ');
}
else if (i % 3 == 0)
{
printf("Fizz");
putchar(' ');
}
else if (i % 5 == 0)
{
printf("Buzz");
putchar(' ');
}

else
printf("%d", i);
putchar(' ');
i++;
}
putchar('\n');
return (0);
}
