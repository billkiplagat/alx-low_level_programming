#include "dog.h"
/**
 * free_dog - function to free memory
 * @d: pointer to dog memory
 *
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
