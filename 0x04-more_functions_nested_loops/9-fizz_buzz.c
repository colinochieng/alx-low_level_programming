#include <stdio.h>
/**
* main - ckecks for multiples of 3 and 5
*
*Return: 0
*/

int main(void)
{
int i = 1;
while (i <= 100)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
if (i == 100)
printf("Buzz ");
else
printf("Buzz");
}

else
printf("%d", i);
putchar(' ');
i++;
}
putchar('\n');
return (0);
}
