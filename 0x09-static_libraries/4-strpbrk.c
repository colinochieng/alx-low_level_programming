#include "main.h"
/**
*_strpbrk -  function that searches a string for any of a set of bytes
*@s: pointer to string
*@accept: pointer to substring
*Return: NULL or pointer to s
*/

char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *j = accept;

while (*j)
{
if (*s == *j)
return (s);

j++;
}
s++;
}
return (NULL);
}
