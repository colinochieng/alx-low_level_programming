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
unsigned add1, add2;

i = 0;
while (i < size)
{
j = (i * size) + i;
add1 = add1 + a[j];
i++;
}

i = 1;
while (i < size + 1)
{
j = (i * size) - i;
add2 = add2 + a[j];
i++;
}