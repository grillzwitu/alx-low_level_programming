## 0x0E-structures_typedef
This directory demonstrates the use of __struct__ and __typedef__ in __C__. The files in this directory include;
- __dog.h__: A header file containing all prototypes of functions, typedef and struct definitions in this directory. It defines a new type struct dog with the following elements:
__name, type = char *__
__age, type = float__
__owner, type = char *__

- __1-init_dog.c__: A function that initialize a variable of type struct dog __Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);__.
- __2-print_dog.c__: A function that prints a struct __dog__. __Prototype: void print_dog(struct dog *d);__. Using the standard library. If an element of __d__ is __NULL__, print __(nil)__ instead of this element. __(if name is NULL, print Name: (nil))__. If __d__ is __NULL__ print nothing.
- __4-new_dog.c__: Creates a new dog.
__Prototype: dog_t *new_dog(char *name, float age, char *owner);__. A copy of __name__ and __owner__ is stored. It returns __NULL__ if the function fails.
- __5-free_dog.c__: Frees dogs. __Prototype: void free_dog(dog_t *d);__.