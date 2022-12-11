#include <stdio.h>
/**
*main - outputs  all possible combinations of single-digit numbers
*Description: 'Use while and for loop'
*Return: returns 0
*/
int main(void)
{
int digit = '0';
while (digit <= '9')
{
for (;digit<= '8'; digit ++)
{
putchar(digit);
putchar(44);
putchar(32);
}
putchar(digit);
digit++;
}
return (0);
}
