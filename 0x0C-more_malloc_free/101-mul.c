#include <stdlib.h>
#include <stdio.h>

int _stringlen(char *str);
int if_num(char *s);

/**
* main - a program that multiplies two positive numbers
* @argc: number of passed arguments
* @argv: array of passed arguments
*
* Return: 0
*/
int main(int argc, char *argv[])
{
    int num1, num2, len1, len2;
    int size1, size2, value, index;
    char *ptr1, *ptr2, *mem;
    int i, j = 0;

    ptr1 = argv[1];
    ptr2 = argv[2];
    if (argc != 3 || !if_num(ptr1) || !if_num(ptr2))
    {
        printf("Error\n");
        exit(98);
    }
    len1 = _stringlen(ptr1);
    len2 = _stringlen(ptr2);
    size1 = len1 + len2;
    size2 = size1 + 1;

    mem = malloc(sizeof(char) * size2);
    if (!mem)
        return (1);
    for (i = 0; i <= size1; i++)
        mem[i] = 0;
    for (len1 -= 1; len1 >= 0; len1--)
    {
        num1 = ptr1[len1] - '0';
        value = 0;
        for (len2 -= 1; len2 >= 0; len2--)
        {
            num2 = ptr2[len2] - '0';
            index = len1 + len2 + 1;
            value += mem[index] + (num1 * num2);
            mem[index] = value % 10;
            value /= 10;
        }
        if (value > 0)
            mem[index] += value;
    }
    for (i = 0; i < size2 - 2; i++)
    {
        if (mem[i] != 0)
        {
            j = 1;
        }
        if (j)
        {
            _putchar(mem[i] + '0');
        }
    }
    if (!j)
    {
        _putchar('0');
    }
    _putchar('\n');
    free(mem);
    return (0);
}

/**
* _stringlen - finds length of a string
* @s: string pointer
*
* Return: string length
*/
int _stringlen(char *str)
{
    int i;
    for (i = 0; str[i] != '\0';)
        i++;
    return(i);
}

/**
* is_digit - checks if a string contains a non-digit char
* @s: string pointer
*
* Return: 1 for number or 0 for non-number
*/
int if_num(char *s)
{
    int i = 0;
    while (s[i])
    {
        if (s[i] < '0' || s[i] > '9')
            return (0);
        i++;
    }
    return (1);
}
