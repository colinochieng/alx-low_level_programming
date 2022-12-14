#include "main.h"
/**
 * _isalpha - checks of alphabets
 *
 * Description: 'use if else statements
 *
 * @c: paramater holding alphabets
 *
 * Return: 0, 1 or -1
 */
int _isalpha(int c)
{
	if (!(c >= 'a' && c <= 'z') && !(c >= 'A' && c <= 'Z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
