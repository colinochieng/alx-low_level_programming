#include "main.h"
/**
*_strcmp - compares two strings
*@s1: first parameter
*@s2: second parameter
*Return: 0, 15 or -15
*/
int _strcmp(const char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0')
{
if (*s1 < *s2)
{
return -15;
}
else if (*s1 > *s2)
{
return 15;
}
s1++;
s2++;
}

if (*s1 == '\0' && *s2 == '\0')
{
return 0;
}
else if (*s1 == '\0')
{
return -15;
} else {
return 15;
}
}
