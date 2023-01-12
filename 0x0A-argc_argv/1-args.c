#include <stdio.h>

/**
* main -a program that prints the number of arguments passed into it
*@argc: number of arguments
*@argv: array of arguments
*Return: 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	printf("%d\n", argc - 1);
	return (0);
}
