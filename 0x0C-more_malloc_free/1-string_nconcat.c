#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - Concatenates 2 strings using n number of bytes
* @s1: string one
* @s2: string two
* @n: n number of bytes
*
* Return: Returns pointer to newly allocated space in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, recall;
char *s;

if (s1 == NULL)
i = 0;
else
i = len_of_str(s1);

if (s2 == NULL)
j = 0;
else
j = len_of_str(s2);

if (j > n)
j = n;

s = malloc(sizeof(char) * (i + j + 1));
if (s == NULL)
return (NULL);

for (recall = 0; recall < len1; recall++)
s[recall] = s1[recall];

while (recall < j)
{
s[recall + i] = s2[recall];
recall++;
}

s[i + j] = '\0';

return (s);
}

/**
*len_of_str - finds string length
*@s: pointer for string
*Return: returns the length of a string
*/

int len_of_str(char *s)
{
if (*s == '\0')
return (0);

return (len_of_str(s + 1) + 1);
}
