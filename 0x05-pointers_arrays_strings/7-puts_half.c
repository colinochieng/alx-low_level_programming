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

i = rev / 2;

while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
_putchar('\n');
}
