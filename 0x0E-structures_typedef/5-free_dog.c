#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - entry point
 *
 * @d: pointer argument for dog struct
 *
 * Description: Frees dog_t *d
 */

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}

}
