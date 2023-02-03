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

	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;

	while (i < ac)
	{
		len += (_strlen_recursion(av[i]));
		i++;
	}
	args_concat = (char *) malloc(len * sizeof(char));

	if (args_concat != NULL)
	{
	for (k = 0, i = 0; i < ac; i++)
		{
			for (j = 0; j < _strlen_recursion(av[i]); j++, k++)
				args_concat[k] = av[i][j];
			args_concat[k++] = '\n';
		}
		args_concat[len - 1] = '\0';
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
