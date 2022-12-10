#include <stdio.h>
/**
*main -  prints the alphabet in lowercase,removing q and e
*Return: returns 0
*/
int main(void)
{
char lower_case = 'a';
for  (; lower_case <= 'z'; lower_case++)
{
if (lower_case == 'e' || lower_case == 'q')
{
continue;
}
putchar(lower_case);
}
putchar('\n');
return (0);
}
