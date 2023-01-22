#include <stdlib.h>
#include <stdio.h>

/**
*dis_opcodes - dispaly opcodes of program
*@a: main function's address
*@n: bytes to be printed
*Return: non (void)
*/
void dis_opcodes(char *a, int n)
{
int i = 0;

while (i < n)
{
printf("%.2hhx", a[i]);
if (i < n - 1)
printf(" ");
i++;
}

printf("\n");

}

/**
* main - prints the opcodes
* @argc: number of arguments passed
* @argv: array of arguments
* Return: O
*/
int main(int argc, char *argv[])
{
int i;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
i = atoi(argv[1]);
if (i < 0)
{
printf("Error\n");
exit(2);
}
dis_opcodes((char *)&main, i);
return (0);
}
