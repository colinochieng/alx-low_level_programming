#include "main.h"
/**
 * _strcpy - Prints a string
 *
 * @src: string parameter
 * @dest: arguments holder
 *Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int j = _strlen(src);
	int k = 0;

	while (k < j)
	{
		dest[k] = src[k];

		k++;
	}
	dest[k] = '\0';
	return (dest);
}
