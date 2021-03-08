#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - entry point
 *
 * @d: pointer argument for dog struct
 * @name: pointer argument for dog name
 * @age: float argument for dog age
 * @owner: pointer argument for owner of the dog
 *
 * Description: Initializes a variable to struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
;
}
else
{
d->name = name;
d->age = age;
d->owner = owner;
}

}
