#include <stdio.h>
/**
 * main - Entry point
 * 
 * Description: 'the program's description'
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';
	int j, k, l;

	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			l = j + 1;
			k = i;
			while (k <= '9')
			{
				while (l <= '9')
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i < '9' || j < '8' || k < '9' || l < '9')
					{
						putchar(',');
						putchar(' ');
					}
					l++;
				}
				l = '0';
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
