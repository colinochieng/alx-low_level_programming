#include "function_pointers.h"

/**
*print_name -  function that prints a name
*@name: pointer to name
*@f: pointer to a function that prints a name
*Return: no value (void)
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
