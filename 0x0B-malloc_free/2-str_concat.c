#include "main.h"

/**
*str_concat - concatenates two strings
*@s1: string one
*@s2: string two
*The returned pointer should point to a newly allocated space in memory
*which contains the contents of s1, followed by the contents of s2
*and null terminated
*if NULL is passed, treat it as an empty string
*Return: The function should return NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	s = malloc(i + j + 1);

	if (s == NULL)
		return (NULL);

	k = 0;

	while (k < i)
	{
		s[k] = s1[k];
		k++;
	}

	l = 0;

	while (l <= j)
	{
		s[k] = s2[l];

		k++;
		l++;
	}

	s[k] = '\0';
	return (s);
}
