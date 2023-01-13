#include <stdlib.h>
#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);
/**
* argstostr - concatenates all the arguments of your program
*@ac:number of arguments
*@av: pointer to array of arguments
*Return: NULL or concatenated arguments
*/

char *argstostr(int ac, char **av)
{
	char *args_concat;
	int i, j, k, len, value;

	i = k = len = value = 0;
	j = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (ac--)
		len += (_strlen_recursion(av[ac]) + 1);
	args_concat = (char *) malloc(len + 1);

	if (args_concat != NULL)
	{
	for (k = 0; k < j; k++)
		{
			for (i = 0; av[k][i] != '\0'; i++)
				args_concat[i + value] = av[k][i];
			args_concat[value + i] = '\n';
			value += (i + 1);
		}
		args_concat[value] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (args_concat);
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
