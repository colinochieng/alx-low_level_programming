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

			if (c % 2)
				value = -value;
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
