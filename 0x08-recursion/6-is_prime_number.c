#include "main.h"
/**
*find_prime_no_recursion - checks if number is prime
*@i: actual number
*@j: recursed number
*Return: 0 if prime or 1 if not prime
*/

int find_prime_no_recursion(int i, int j)
{

if (i <= 1)
return (0);

if (j == 1)
return (1);

else if (i % j == 0 && j > 0)
return (0);

return (find_prime_no_recursion(i, j - 1));
}

/**
*is_prime_number - checks if number is prime
*Provides valid parameter to function find_prime_no_recursion
*Allows passage of only one parameter to find if number is prime
*@n: parameter for the confirming prime number
*Return: value from function find_prime_no_recursion
*/

int is_prime_number(int n)
{
return (find_prime_no_recursion(n, n - 1));
}
