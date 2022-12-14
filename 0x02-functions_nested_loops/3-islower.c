#include "main.h"
/**
 * _islower - return 1 or 0
 *
 * Description: 'checks for lower alphabet'
 *
 *@c: parmeter for checking alphabets
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (!(c >= 'a' && c <= 'z'))
		return (0);
	else
		return (1);
}
