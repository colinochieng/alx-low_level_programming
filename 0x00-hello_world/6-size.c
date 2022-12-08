#include <stdio.h>
/**
 * main - outputs size of datatypes
 *
 * example:Size of a char: 1 byte(s)
 *Return: 0
 */
int main(void)
{
	char i;
	int j;
	long int k;
	long long int l;
	float m;

	printf("Size of a char: %ld byte(s)\n", sizeof(i));
	printf("Size of an int: %ld byte(s)\n", sizeof(j));
	printf("Size of a long int: %ld byte(s)\n", sizeof(k));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(l));
	printf("Size of a float: %ld byte(s)\n", sizeof(m));
	return (0);
}
