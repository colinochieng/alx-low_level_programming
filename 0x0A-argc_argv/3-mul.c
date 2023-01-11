#include <stdio.h>
#include <stdlib.h>

/**
 * main -a program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 or product
 */

int main(int argc, char *argv[])
{
	int recall = 1;
	int product = 1;

	if (argc > 2)
	{
		while (recall < argc)
		{
			product *= atoi(argv[recall]);
			recall++;
		}
	}

	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", product);
	return (0);
}

