#include "main.h"
/**
*_strcmp - compares two strings
*@s1: first parameter
*@s2: second parameter
*Return: ASCII code difference between two strings
*/
int _strcmp(char *s1, char *s2)
{
int i;

for (; *s1 == *s2; s1++, s2++)
{
if (*s1 == '\0')
return (0);
}

i = *s1 - *s2;
return (i);
}
