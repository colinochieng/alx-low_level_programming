#include "dog.h"

/**
 *init_dog - initialize a variable of type struct dog
 *@d: struct pointer
 *@name: dog name 
 *@age: dog age
 *@owner: dog owner
 *
 *Return: no value
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
