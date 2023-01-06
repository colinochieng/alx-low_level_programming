#include "main.h"
/**
*find_sqrt_recursion - finds the square root of number
*@i: parameter for number to finds its squre root
*@j: parameter for returning the squre root of a number
*Return: 1, -1 or the square root
*/

int find_sqrt_recursion(int i, int j)
{
if (j * j == i)
return (j);

if (j * j > i)
return (-1);
return (find_sqrt_recursion(i, j + 1));
}

/**
*_sqrt_recursion - calls square root function
*Allows passing of only the number to find its square root
*@n: parameter to pass the number to finds its square root
*Return: 1, -1 or the square root
*/

int _sqrt_recursion(int n)
{
return (find_sqrt_recursion(n, 1));
}
