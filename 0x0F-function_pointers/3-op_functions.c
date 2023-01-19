#include "3-calc.h"

/**
*op_add - find sum
*@a: first number
*@b: second number
*Return: sum
*/

int op_add(int a, int b) 
{
	return (a + b);
}

/**
*op_sub - find deference
*@a: first number
*@b: second number
*Return: difference
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
*op_mul - find product
*@a: first number
*@b: second number
*Return: product
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_div - find quotient
*@a: first number
*@b: second number
*Return: quotient
*/

int op_div(int a, int b)
{
	if (b == 0) 
	{
		printf("Error\n");
		exit (100);
	}
	return (a / b);
}

/**
*op_add - find remainder
*@a: first number
*@b: second number
*Return: remainder
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a % b);
}
