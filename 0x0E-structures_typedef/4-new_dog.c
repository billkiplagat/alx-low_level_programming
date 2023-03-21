#include "dog.h"
/**
 * new_dog - function to create a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
int i;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
new_dog->name = malloc(sizeof(name) + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
new_dog->owner = malloc(sizeof(owner) + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
for (i = 0; name[i]; i++)
{
new_dog->name[i] = name[i];
}
new_dog->name[i] = '\0';
new_dog->age = age;
for (i = 0; owner[i]; i++)
{
new_dog->owner[i] = owner[i];
}
new_dog->owner[i] = '\0';
return (new_dog);
}
