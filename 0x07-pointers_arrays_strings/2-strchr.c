#include "main.h"
/**
*_strchr -  function that positions a character in a string
*@s: pointer to a string
*@c: character to be positioned
*Return: NULL or pointer to a string
*/
char *_strchr(char *s, char c)
{
int m = 0;

while (s[m] != '\0')
{
if (s[m] == c)
return (s + m);
m++;
}

return (NULL);
}
