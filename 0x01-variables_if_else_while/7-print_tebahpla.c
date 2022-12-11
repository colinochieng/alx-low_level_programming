#include <stdio.h>
/**
*main - outputs the lowercase alphabet in reverse
*Description: 'Use while loop'
*Return: returns 0
*/
int main(void)
{
char digit = 'z';
while (digit >= 'a')
{
putchar(digit);
digit--;
}
putchar('\n');
return (0);
}
