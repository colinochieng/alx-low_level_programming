#include "main.h"
#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n);

/**
 * _calloc - a function that allocates memory for an array
 *uses malloc
 * @nmemb: size of array
 * @size: size per element in bytes
 * Return: memory pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	int mem_size = size * nmemb;

	if (!nmemb || !size)
		return (NULL);

	s = malloc(mem_size);
	if (!s)
		return (NULL);

	_memset(s, 0, mem_size);

  	return (s);
}

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
