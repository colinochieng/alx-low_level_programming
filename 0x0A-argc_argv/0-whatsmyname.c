#include <stdio.h>
/**
*main - a program that prints its name, followed by a new line
*@argv: arrays of strings
*@argc: number of arguments
*Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
	printf("%s\n", argv[0]);

	return (0);
}
