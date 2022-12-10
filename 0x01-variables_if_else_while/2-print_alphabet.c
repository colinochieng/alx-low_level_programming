#include <stdio.h>
/**
*main -  prints the alphabet in lowercase, followed by a new line
*Return: returns 0
*/
int main(void)
{
char lower_case = 'a';
while (lower_case <= 'z')
{
putchar(lower_case);
lower_case++;
}
putchar('\n');
return (0);
}
