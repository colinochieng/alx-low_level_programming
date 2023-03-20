#include "main.h"
/**
 * _isupper - function for upper case
 *
 * @c: holder for the arguments passed
 *
 * Return: 1 0r 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
