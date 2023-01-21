#include "variadic_functions.h"

/**
*print_numbers - displays numbers, followed by a new line
*@separator: is the string to be printed between numbers
*@n:  number of integers passed to the function
*Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	size_t  i;

	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(num, int));
		else
		{
			if (i < n - 1)
				printf("%d%s", va_arg(num, int), separator);
			else
				printf("%d", va_arg(num, int));
		}
	}
	_putchar(10);
	va_end(num);
}
