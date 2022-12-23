#include "main.h"
/**
* leet - encodes a string into 1337
*
*@s: takes the value of passed string
*
*Return: s
*/

char *leet(char *s)
{
int a [11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
int b [11] = {'a', 'A', 'e', 'E', '0', 'O', 't', 'T', 'l', 'L'};
int i, j;
i = j = 0;

while (s[j] != '\0')
{

for (i = 0; a[i] != '\0'; i++)
{
if (s[j] == b[i])
s[j] = a[i];
}
j++;
}

return (s);
}
