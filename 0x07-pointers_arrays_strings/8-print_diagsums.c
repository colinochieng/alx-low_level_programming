#include "main.h"
#include <stdio.h>
/**
*print_diagsums - function that prints the sum of the two diagonals
*@a: pointer to diagnal of the square matrix
*@size: size of passed array
*Return: no value
*/
void print_diagsums(int *a, int size)
{
int i, j;
unsigned int add1 = 0, add2 = 0;

i = 0;
while (i < size)
{
j = (i *size) + i;
add1 = add1 + a[j];
i++;
}

i = 1;
while (i < size + 1)
{
j = (i *size) - i;
add2 = add2 + a[j];
i++;
}
printf("%d", add1);
printf(", %d\n", add2);
}
