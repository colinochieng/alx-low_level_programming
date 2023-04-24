#include "main.h"

/**
*_strlen - finds len of string
*@str: Number
*Return: len of number
*/
int _strlen(char *str)
{
	int i = 0;

	while (*str)
	{
		i++;
		str++;
	}

	return (i);
}

/**
*_str_rev - reverses a string
*@r: string pointer
*/
void _str_rev(char *r)
{
	int i = 0, j = _strlen(r) - 1;
	char ch;

	while (i < j)
	{
		ch = r[j];
		r[j] = r[i];
		r[i] = ch;
		i++;
		j--;
	}
}

/**
*infinite_add - adds two numbers
*@n1: first number
*@n2: second number
*@r: buffer
*@size_r: buffer size
*Return: sum or 0
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, num1, num2, value = 0;
	int carrier = 0;
	int len1 = _strlen(n1) - 1;
	int len2 = _strlen(n2) - 1;

	if (len1 >= size_r || len2 >= size_r)
		return (0);
	i = 0;

	while (len1 >= 0 || len2 >= 0 || carrier == 1)
	{
		if (len1 < 0)
			num1 = 0;
		else
			num1 = n1[len1] - '0';
		if (len2 < 0)
			num2 = 0;
		else
			num2 = n2[len2] - '0';
		value = num1 + num2 + carrier;
		if (value >= 10)
			carrier = 1;
		else
			carrier = 0;
		if (i >= size_r - 1)
			return (0);
		r[i] = (value % 10) + '0';
		i++;
		len1--;
		len2--;
	}

	if (i == size_r)
		return (0);
	r[i] = '\0';
	_str_rev(r);
	return (r);
}
