#include "variadic_functions.h"

/**
* print_all - a function that prints anything
* @format: format of data type to be printed
*c: char
*i: integer
*f: float
*s: char *
*if the string is NULL, print (nil)
*any other char is ignored
*/
void print_all(const char * const format, ...)
{
char *stri, *sep = "";
unsigned int i = 0;
va_list vaarg;

va_start(vaarg, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(vaarg, int));
break;
case 'i':
printf("%s%i", sep, va_arg(vaarg, int));
break;
case 'f':
printf("%s%f", sep, va_arg(vaarg, double));
break;
case 's':
stri = va_arg(vaarg, char *);
if (!stri)
stri = "(nil)";
printf("%s%s", sep, stri);
break;
default:
i++;
continue;
}
sep = ", ";
i++;
}
}
printf("\n");
va_end(vaarg);
}
