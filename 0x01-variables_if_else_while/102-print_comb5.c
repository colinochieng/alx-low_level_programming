#include <stdio.h>
/**
 * main - outputs combinations of two two-digit numbers
 * Description : use while loop for times and four intergers
 * Returns : 0
 */
int main(void)
{
	int i = '0';
	int j, k, l;
	while (i <= '9')
	{
		j = '0';
		while (j <= '8')
		{
			k = i;
			while (k <= '9')
			{
				l = j+1;
				 while ( l != '0' && l <= '9')
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i == '9' && j == '8' && k == '9' && l == '9')
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
					}
					putchar(' ');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	return (0);
}
