#include "main.h"
#include <string.h>

/**
 * print_rev - Prints a string in reverse
 *
 * @s: string parameter
 *Return: no value
 */
void print_rev(char *s)
{
int rev = strlen(s);
int j = rev - 1;

while (j >= 0)
{
_putchar(s[j]);
j--;
}
_putchar('\n');
}

