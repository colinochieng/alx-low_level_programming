#include "main.h"
/**
*print_chess_board - outputs chess board
*@a: pointer to the board
*Return: no value
*/
void print_chess_board(char (*a)[8])
{
int m, n;

for (m = 0; m < 8; m++)
{
for (n = 0; n < 8; n++)
printf("%c ", a[m][n]);

_putchar('\n');
}
}
