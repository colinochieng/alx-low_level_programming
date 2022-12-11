#include <stdio.h>
/**
*main - outputs combinations of three digits
*Description: 'Use while and for loop'
*Return: returns 0
*/
int main(void)
{
int digit1= 0;
int digit2;
int digit3;
while (digit1 <= 9)
{
digit2 = digit1 + 1;
while (digit2 <= 9)
{
digit3 = digit2 + 1;
while (digit3 <= 9)
{
putchar((digit1 % 10) + '0');
putchar((digit2 % 10) + '0');
putchar((digit3 % 10) + '0');
if (digit1 == 7 && digit2 == 8 && digit3 == 9)
{
break;
}
putchar(44);
putchar(32);
digit3++;
}
digit2++;
}
digit1++;
}
putchar('\n');
return (0);
}
