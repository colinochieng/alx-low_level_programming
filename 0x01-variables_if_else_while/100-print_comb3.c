#include <stdio.h>
/**
*main - outputs  combinations of two digits
*Description: 'Use while and for loop'
*Return: returns 0
*/
int main(void)
{
int digit1 = 0;
int digit2;
while (digit1 <= 9)
{
for(digit2 = digit1 + 1; digit2 <= 9 ;digit2++)
{
putchar((digit1 % 10) + '0');
putchar((digit2 % 10) + '0');
if(digit1 == 8 && digit2 == 9)
{
continue;
}
putchar(44);
putchar(32);
}
digit1++;
}
putchar('\n');
return (0);
}
