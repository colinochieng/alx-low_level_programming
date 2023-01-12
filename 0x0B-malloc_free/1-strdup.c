#include "main.h"
#include <stdlib.h>

int _strlen_recursion(char *s);

/**
*_strdup - returns a pointer to a newly allocated space in memory
*which contains a copy of the string given as a parameter
*@str: string pointer
*Return: NULL or string pointer
*/
char *_strdup(char *str)
{
	int len = _strlen_recursion(str);
	int i;
	char *s = malloc(len);
	if (str == NULL)
		return (NULL);
	if (s == 0)
		return (NULL);
	i = 0;
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

/**
*_strlen_recursion - finds string length
*@s: pointer for string
*Return: returns the length of a string
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);

	return (_strlen_recursion(s + 1) + 1);
}
