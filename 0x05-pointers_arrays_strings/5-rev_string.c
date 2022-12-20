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
int j = 0;
char i;
while (j < rev / 2)
{
i = s[j];
s[j] = s[rev - j - 1];
s[rev - j - 1] = i;
j++;
}
_putchar('\n');
}

