#include "main.h"
#include <stdlib.h>

/**
* _realloc - reallocates a memory block
* @ptr: pointer to the memory previously allocated with a call to malloc
* @old_size: size of ptr
* @new_size: size of the new memory to be allocated
*
* Return: pointer to the address of the new memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *s, *n;
int *m;
unsigned int iter;

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
s = malloc(new_size);
if (s == NULL)
return (NULL);
else
return (s);
}

s = malloc(new_size);
if (s == NULL)
return (NULL);

iter = 0;
while (iter < old_size && iter < new_size)
{
m = (char *) s;
n = (char *) ptr;
m[iter] = n[iter];
iter++;
}

free(ptr); /* free old ptr */

return (s);
}
