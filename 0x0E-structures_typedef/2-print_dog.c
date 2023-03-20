#include "dog.h"
/**
 * print_dog - print a structure.
 * @d: pointer containing the structure.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if ((*d).name == NULL)
printf("Name: (nil)");
if ((*d).owner == NULL)
printf("Owner: (nil)");
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
