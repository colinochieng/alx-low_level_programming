#include "main.h"
/**
*_strchr -  function that positions a character in a string
*@s: pointer to a string
*@c: character to be positioned
*Return: NULL or pointer to a string
*/
char *_strchr(char *s, char c)
{
int i = 0;

while (s[i] != c)
i++;
if (s[i] == c)
return (s + i);
else
return (NULL);
}
