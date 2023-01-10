#include "main.h"
/**
*_strspn - gets the length of a prefix substring
*@s: pointer to the string
*@accept: pointer to substring
*Return: number of bytes of accept in s
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
char *j;

while (*s)
{
for (j = accept; *j && *s != *j;  j++)
;

if (*j == '\0')
break;

i++;
s++;
}
return (i);
}
