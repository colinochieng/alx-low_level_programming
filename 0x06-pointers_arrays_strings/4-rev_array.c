#include "main.h"
/**
* reverse_array - reverse elements of an int array
*
*@n: number of elements of the array
*@a:pointer for the passed parameter
*Return: no value
*/

void reverse_array(int *a, int n)
{
int rev, i, j;
i = 0;
j = n - 1;

for (; i < j; j--)
{
rev = a[i];
a[i] = a[j];
a[j] = rev;
i++;
}

}
