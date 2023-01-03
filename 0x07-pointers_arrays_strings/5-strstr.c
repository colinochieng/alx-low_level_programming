#include "main.h"
/**
*_strstr -  locates a substring
*First it checks presence of the first needle character in haystack
*If present it checks presence of the other characters match in the order
*Else it breaks and return null
*@haystack: pointer to the string
*@needle: pointer to the substring
*Return: NULL if no substring or returns needle
*/

char *_strstr(char *haystack, char *needle)
{
int m, n;

for (m = 0; haystack[m] != '\0'; m++)
{

if (haystack[m] == needle[0])
{
for (n = 0; needle[n] != '\0'; n++)
{

if (haystack[m + n] != needle[n])
break;
}

if (needle[m] == '\0')
return (&haystack[n]);
}
}

return (0);
}
