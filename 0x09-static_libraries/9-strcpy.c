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


/**
 * _strlen -prints length of a string
 *
 * @s: pointer for printing the length
 *
 * Return: length
 *
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	for ( ; *s != '\0'; s++)
		len++;

	return (len);
}
