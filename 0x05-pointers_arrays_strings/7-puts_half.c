#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 *
 * @str: parameter pointer that holds value of string passed
 *
 * Return: no value
 */

void puts_half(char *str)
{
int i = 0;
int rev = strlen(str);

if (rev % 2 == 0)
{
i = rev / 2;

while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
}

if (rev % 2 == 1)
{
i = (rev / 2) + 1;

while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
}
else if (str[i] == '\0')
{
_putchar('\n');
}
}
