#include "main.h"
/**
* _puts_recursion - a function that prints a string, followed by a new line
*@s: pointer to the string
*Return: no value
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
return (0);
}
putchar(*s);
++s;
_puts_recursion(s);
}
