#include "main.h"

/**
* _strncpy  - copies strings
*
* @dest: first pointer
* @src: second pointer
* @n: len
* Return: dest (copied string)
*/
char *_strncpy(char *dest, char *src, int n)
{
int j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
