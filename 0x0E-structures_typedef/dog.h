#ifndef DOG_H
#define DOG_H

/**
 * struct dog - type to describe a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_ti - Typedef for dog
 */
typedef struct dog dog_ti;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_ti *new_dog(char *name, float age, char *owner);
void free_dog(dog_ti *d);

#endif
