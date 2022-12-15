#include "main.h"

/**
 * times_table -creates timetable
 * Return: no value
 */
void times_table(void)
{
	int i, j, k;

	i = 0;

	while (i <= 9)
	{
		_putchar('0');
		j = 1;

		while (j <= 9)
		{
			_putchar(',');
			_putchar(' ');
			k = i * j;

			if (k <= 9)
			{
				_putchar(' ');
				_putchar((k % 10) + '0');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}

			j++;
		}

		_putchar('\n');
		i++;
	}
}
