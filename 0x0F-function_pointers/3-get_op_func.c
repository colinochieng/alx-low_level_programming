#include "3-calc.h"

/**
*get_op_func - selects the correct function to perform the operation
*@s: pointer to sign passed
*Return: NULL or a pointer that coresponds to the operation
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;

i = 0;
while (ops[i].op)
{
if (*s == *(ops[i].op))
{
return (ops[i].f);
}
i++;
}
return (NULL);
}
