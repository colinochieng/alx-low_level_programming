#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int strleng(char *s);
char *copypa(char *s1, char *s2);

/**
*new_dog - a function that creates a new dog
*@name: pointer to the dog's name
*@owner: pointer to the dog's owner
*@age: new dog's age
*Return: NULL if the function fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pup;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	pup = malloc(sizeof(dog_t));
	if (pup == NULL)
		return (NULL);

	(*pup).name = malloc(sizeof(char) * (strleng(name) + 1));

	if ((*pup).name == NULL)
	{
		free(pup);
		return (NULL);
	}

	(*pup).owner = malloc(sizeof(char) * (strleng(owner) + 1));

	if ((*pup).owner == NULL)
	{
		free((*pup).name);
		free(pup);
		return (NULL);
	}

	(*pup).name = copypa(name, (*pup).name);
	(*pup).age = age;
	(*pup).owner = copypa(owner, (*pup).owner);

	return (pup);
}

/**
*strleng - find strings length
*@s: pointer to the string
*Return: length of string
*/
int strleng(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
*copypa - copy string string 1 to 2
*@s1: pointer to first string
*@s2: pointer to the second string
*Return: copied string
*/

char *copypa(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}

	s2[i] = '\0';
	return (s2);
}
