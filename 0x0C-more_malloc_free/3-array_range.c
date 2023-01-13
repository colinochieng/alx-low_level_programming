#include <stdlib.h>
#include "main.h"

/**
 * array_range -  a function that creates an array of integers
 * @min: start point of the range
 * @max: end point of range
 * Return: pointer to the newly created array
 *or NULL if malloc fails
 */

int *array_range(int min, int max)
{
	int *s, recall;
	int array_extent = ((max - min) + 1);

	if (max < min)
		return (NULL);

	
	s = malloc(sizeof(int) * array_extent);
	if (s == NULL)
		return (NULL);

	recall = 0;
  while (recall < array_extent)
  {
    s[i] = min++;
    i++;
  }

	return (s);
}
