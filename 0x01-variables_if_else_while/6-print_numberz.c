#include <stdio.h>
/**
*main - outputs all single digit numbers of base 10 starting from 0
*Description: 'Use while loop'
*Return: returns 0
*/
int main(void)
{
int digit = '0';
while (digit <= '9')
{
putchar(digit);
digit++;
}
putchar('\n');
}
