#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - a program that adds positive numbers
* Print the result, followed by a new line
* If no number is passed to the program, print 0, followed by a new line
* If one of the number contains symbols that are not digits
* print Error, followed by a new line, and return 1
*
* @argc: argument count
* @argv: array of arguments
* Return: 0 or 1
*/

int main(int argc, char *argv[])
{
int recall = 1;
int total = 0;
int i;

if (argc > 1)
{
while (recall < argc)
{
i = 0;
while (argv[recall][i] != '\0')
{
if (!isdigit(argv[recall][i]))
{
printf("Error\n");
return (1);
}

else
total += atoi(argv[recall]);
i++;
}
}
printf("%d\n", total);
}
else
{
printf("%d\n", 0);
}
return (0);
}
