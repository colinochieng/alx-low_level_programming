#include "main.h"

/**
 *  print_last_digit - prints the last digit of a number
 *
 *  @lastnum: holds for last number
 *
 *  Return: 0
 */
int print_last_digit(int lastnum)
{
	lastnum = lastnum % 10;

	if (lastnum >= 0)
	{
		_putchar(lastnum + '0');
	}
	else if (lastnum < 0)
	{
		lastnum = -lastnum;
		_putchar(lastnum + '0');
	}
	return (lastnum);
}
