#include "main.h"
/**
*_memset - fuction that fills memeory with constant bytes
*@s: pointer to the memory location
*@b: contant byte to be filled into the memory
*@n: number of b to filled
*Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int recur;

for (recur = 0; recur < n ; recur++)
s[recur] = b;
  
return (s);
}
