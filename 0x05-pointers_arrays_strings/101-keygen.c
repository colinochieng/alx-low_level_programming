
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - choose random code
 *
 * Return: 0
 *
 */
int main(void)
{
int passcode;
char j;

srand(time(NULL));
while (passcode <= 2222)
{
j = rand() % 128;
passcode = passcode + j;
putchar(j);
}

return (0);

}

