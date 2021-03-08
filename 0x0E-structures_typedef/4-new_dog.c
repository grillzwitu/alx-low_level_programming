#include "dog.h"
#include <stdlib.h>

/**
 * *new_dog - entry point
 *
 * @name: pointer argument for name of dog
 * @age: float argument for dog age
 * @owner: pointer argument for owner of the dog
 *
 * Description: Creates a new dog
 *
 * Return: Pointer to new_dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
int l1, l2, a;

l1 = l2 = a = 0;
while (name[l1++] != '\0')
;
while (owner[l2++] != '\0')
;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

new_dog->name = malloc(l1);
new_dog->owner = malloc(l2);

do
{
new_dog->name[a] = name[a];
}
while (name[a++] != '\0');
a = 0;

do
{
new_dog->owner[a] = owner[a];
} 
while (owner[a++] != '\0');
new_dog->age = age;

return (new_dog);
}
