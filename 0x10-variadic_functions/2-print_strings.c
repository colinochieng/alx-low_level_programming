#include "variadic_functions.h"

/**
*print_strings - prints strings, followed by a new line.
*@separator: the string to be printed between the strings
*@n: the number of strings passed to the function
*separator is NULL, it is not printed
*If one of the string is NULL, (nil) printed
*Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	size_t i;
	char *ptr_va;

	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		ptr_va = va_arg(str, char*);

		if (ptr_va == NULL)
		ptr_va = "(nil)";

		if (separator == NULL)
		printf("%s", ptr_va);

		else
		{
		if (i < n - 1)
		printf("%s%s", ptr_va, separator);
		else
		printf("%s", ptr_va);
	}
	}
	printf("\n");
	va_end(str);
}
