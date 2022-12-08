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

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(i));
	printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(j));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(k));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(l));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(m));
}
