#include "main.h"
/**
* string_toupper - turns string from lowre acse to upper
*
*@s: takes the value of passed string
*
*Return: s
*/

char *string_toupper(char *s)
{
int a[27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int b[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int i = 0;
int j = 0;
	
for (j = 0; s[j] != '\0'; j++)
{
for (i = 0; a[i] != '\0'; i++)
{
if (s[j] == b[i])
s[j] = a[i];
}
}

return (s);
}
