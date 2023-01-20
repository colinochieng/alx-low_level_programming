#include "main.h"

/**
* cap_string - capitalizes all words of a string
*checks on word separators
*s: pointer to string
*Return: capitalized words in string
*/
char *cap_string(char *str)
{
int i, j;
/* Declaring a string of word separators*/
char punc[13] = {' ', ',', '.', '"', '?', '(', '(', '\t', '\n', '{', '}', ';'};

for (i = 0; str[i] != '\0'; i++)
{
if (str[0] >= 97 && str[0] <= 122)
str[0] -= 32;

j = 0;

while (j < 13)
{
if (str[i] == punc[j])
{
if (str[i + 1] >= 97 && str[i + 1] <= 122)
str[i + 1] -= 32;
}
j++;
}
}

return (str);
}
