#include "main.h"
/**
 * jack_bauer - outputs time
 *
 * Description: 'uses nested while loops and an if statement'
 *
 * Return: no value
 */
void jack_bauer(void)
{
	int hr1, hr2, min1, min2;

	hr1 = '0';

	while (hr1 < '3')
	{
		hr2 = '0';

		while (hr2 <= '9')
		{
			min1 = '0';
			if (hr1 == '2' && hr2 > '3')
				break;

			while (min1 < '6')
			{
				min2 = '0';

				while (min2 <= '9')
				{
					_putchar(hr1);
					_putchar(hr2);
					_putchar(':');
					_putchar(min1);
					_putchar(min2);
					_putchar('\n');

					min2++;
				}
				min1++;
			}
			hr2++;
		}
		hr1++;
	}
}

