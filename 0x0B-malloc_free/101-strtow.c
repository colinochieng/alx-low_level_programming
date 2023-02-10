#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n);

/**
*strtow - function that splits a string into words.
*@str: sting to be spilted
*Return: NULL if str == NULL or str == ""
*/

char **strtow(char *str)
{
	int count = 0;
	int i, j;
	int start = 0;
	int end;
	char **result;

	if (str == NULL || str[0] == '\0')
		return (NULL);

/*counting no of space to determine number of words*/
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			count++;
	}

	result = (char **) malloc((count + 1) * sizeof(char*));

	j = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' || str[i + 1] == '\0')
		{
			end = i;

			if (str[i + 1] == '\0')
			{
				end = i + 1;
			}

			result[j] = (char *) malloc((end - start + 1) * sizeof(char));
			_memcpy(result[j], &str[start], end - start);
			result[j][end - start] = '\0';
			j++;
			start = i + 1;
		}
	}

    result[j] = NULL;
    return (result);
}
/**
*_memcpy - function that copies memory location
*@dest: pointer for for copied memory area
*@src: pointer assigned memory area
*@n: number of bytes to pe copied
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];

return (dest);
}
