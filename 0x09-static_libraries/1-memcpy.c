#include "main.h"
/**
*_memcpy - function that copies memory location
*@dest: pointer for for copied memory area
*@src: pointer assigned memory area
*@n: number of bytes to pe copied
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];

return (dest);
}
