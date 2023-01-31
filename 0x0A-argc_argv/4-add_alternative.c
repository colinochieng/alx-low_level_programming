#include <stdio.h>
#include <stdlib.h>

/**
*main - adds positive numbers
*@argc: total numbers passed
*@argv: array of numbers passed
*Return: 0 or 1
*/
int main(int argc, char *argv[])
{
        int i, j;
        int sum = 0;
        char *str;

        for (i = 1; i < argc; i++)
        {
                str = argv[i];
                for (j = 0; str[j] != '\0'; j++)
                {
                        if (str[j] < 48 || str[j] > 57)
                                {
                                        printf("Error\n");
                                        return (1);
                                }
                }
                sum += atoi(str);
        }
}
