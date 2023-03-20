#include "calc.h"

/**
 * add - adds to values
 * @a: first integer
 * @b: second integer
 * Return: sum
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - finds difference
 * @a: first int
 * @b: second int
 * Return: difference
*/
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - finds product
 * @a: first int
 * @b: second int
 * Return: product
*/
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - finds quotient
 * @a: first int
 * @b: second int
 * Return: quotient
*/
int div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

/**
 * mod - finds remainder
 * @a: first int
 * @b: second int
 * Return: remainder
*/

int mod(int a, int b)
{
        if (b == 0)
                return (0);
        return (a % b);
}
