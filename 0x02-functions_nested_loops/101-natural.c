#include <stdio.h>
/**
 * main - adds all multiples of 3 and 5 between 0 and 1024
 *
 * Description: 'Use while loop and nested ifstatements'
 *
 * Return: 0
 */
int main(void)
{
	int value = 0;
	int sum = 0;

	while (value <= 1024)
	{
		if (value > 0)
		{
			if (value % 5 == 0 || value % 3 == 0)
			{
				sum = value + sum;
			}
		}
		value++;
	}
	putchar((sum / 100000) + '0');
	putchar(((sum / 10000) % 10) + '0');
	putchar(((sum / 1000) % 10) + '0');
	putchar(((sum / 100) % 10) + '0');
	putchar(((sum / 10) % 10) + '0');
	putchar((sum % 10) + '0');
	putchar('\n');

	return (0);
}
