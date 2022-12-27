#include <stdio.h>
#include <stdint.h>
#include <math.h>
/**
*main - prints max prime factor
*Return: 0
*/

int main(void)
{

int num = 612852475143;
int largest_factor = 1;
int i;

int max_factor = sqrt(num);
for (i = 2; i <= max_factor; i++)
{
while (num % i == 0)
{
largest_factor = i;
num /= i;
}
}

if (num > 1)
largest_factor = num;

printf("%ld\n", largest_factor);
return (0);
}
