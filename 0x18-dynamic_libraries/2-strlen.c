#include "main.h"

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
