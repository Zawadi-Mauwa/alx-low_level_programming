#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Will initialize a variable of type struct dog
 * @d: 1st parameter an is pointer tp struct dog to init
 * @name: 2nd parameter and is name to init
 * @age: 3rd parameter and is age to init
 * @owner: last parameter and is  owner to init
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
