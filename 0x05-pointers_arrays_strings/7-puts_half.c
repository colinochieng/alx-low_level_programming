#include "main.h"
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
int rev = _strlen(str);

if (rev % 2 == 0)
{
i = rev / 2;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
}

if (rev % 2 == 1)
{
i = (rev / 2) + 1;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
}
_putchar(10);
}
  
int _strlen(char *s)
{
int len;

len = 0;
for ( ; *s != '\0'; s++)
len++;

return (len);
}

