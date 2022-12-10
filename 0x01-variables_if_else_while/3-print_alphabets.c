#include <stdio.h>
/**
*main -  prints the alphabet in lowercase, and then in uppercase
*Return: returns 0
*/
int main(void)
{
char lower_case = 'a';
char upper_case = 'A';
while (lower_case <= 'z')
{
putchar(lower_case);
lower_case++;
}
while ( upper_case<='Z')
{
putchar(upper_case);
upper_case++;
}
putchar('\n');
return (0);
}
