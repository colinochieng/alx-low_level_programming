#include "main.h"

/**
 * _atoi - converts string to an integer
 *
 * @s: holder
 *
 * Return: string
 */

int _atoi(char *s)
{
	int all = _strlen(s);
	int value;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while (a < all && b == 0)
	{
		if (s[a] == '-')
			++c;
		if (s[a] >= '0' && s[a] <= '9')
		{
			value = s[a] - '0';
			
			if ( c % 2 == 0)
				value = - value;
			d = d * 10 + value;
			b = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			b = 0;
		}
		a++;
	}
	if (b == 0)
		return (0);

	return (d);
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
