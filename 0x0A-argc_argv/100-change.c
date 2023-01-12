#include <stdio.h>
#include <stdlib.h>

/**
*main - a program that prints the minimum number of coins
*To make change for an amount of money
* use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
*print Error if the number of arguments is not 1
*@argc: number of arguments
*@argv: array of arguments(money)
*Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int change = 0;
	int rem = 0;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	i = atoi(argv[1]);
	change += i / 25;
	rem = i % 25;
	change += rem / 10;
	rem %= 10;
	change += rem / 5;
	rem %= 5;
	change += rem / 2;
	rem %= 2;
	change += rem / 1;

	printf("%d\n", change);
	return (0);
}
