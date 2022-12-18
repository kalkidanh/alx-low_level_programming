#include "dog.h"


/**
 * _strlen - return string length
 * @str: string to remove
 * Return: length of string
 */

int _strlen(char *str)
{
int len = 0;
while (str)
len++;

return (len);
}


/**
 * _strcopy - copy string to dest
 * @dest: destnatin buffer
 * @src: source buffer
 * Return: string copy
 */

char *_strcopy(char *dest, char *src)
{
int index = 0;

for (; src[index] ; index++)
dest[index] = src[index];

dest[index] = '\0';
return (dest);
}




/**
 * new_dog - create new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doggo;

if (name == NULL || age < 0 || owner == NULL)
return (NULL);

doggo = malloc(sizeof(dog_t));
if (doggo == NULL)
return (NULL);

doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (doggo->name == NULL)
{
free(doggo);
return (NULL);
}

doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (doggo->owner == NULL)
{
free(doggo->name);
free(doggo);
return (NULL);
}

doggo->name = _strcopy(doggo->name, name);
doggo->age = age;
doggo->owner = _strcopy(doggo->owner, owner);

return (doggo);
}
