#include "main.h"
/**
*_memset - fuction that fills memeory with constant bytes
*@s: pointer to the memory location
*@b: contant byte to be filled into the memory
*@n: number of b to filled
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n ; i++)
s[i] = b;
return (s);
}
