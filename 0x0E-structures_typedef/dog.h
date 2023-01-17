#ifndef DOG_H
#define DOG_H
/**
*struct dog - describe a dog
*@name: name of dog
*@owner: dog owner
*@age: the dogs age
*/

struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
*dog_t - synonym for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
