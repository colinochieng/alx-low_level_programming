#include "main.h"
#include <string.h>

/**
 * rev_string - Prints a string in reverse
 *
 * @s: string parameter
 *Return: no value
 */
void rev_string(char *s)
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

