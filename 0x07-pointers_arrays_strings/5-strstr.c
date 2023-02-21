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
m = 0;
while (haystack[m] != '\0')
{
n = 0;
while (needle[n] != '\0')
{
if (haystack[m + n] != needle[n])
break;
n++;
}
if (!needle[n])
return (&haystack[m]);
m++;
}

return (0);
}
