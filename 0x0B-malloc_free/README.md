## 0x0B-malloc_free
This directory demonstrates the use of dynamic memory allocation, using the standard library functions __malloc__ and __free__. The files in this directory include;
- ___putchar.c__: My implementation of the __putchar__ function used to print characters passed into the function.
- __holberton.h__: Header file containing all protoypes of the functions used in the this directory.
- 0-create_array.c: Creates an array of chars, and initializes it with a specific char. __Prototype: char *create_array(unsigned int size, char c);__. Returns __NULL__ if __size = 0__, returns a pointer to the array, or __NULL__ if it fails.
- 1-strdup.c: Returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter. __Prototype: char *_strdup(char *str);__. The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with __malloc__, and can be freed with free.
Returns __NULL__ if __str = NULL__. On success, the _strdup function returns a pointer to the duplicated string. It returns __NULL__ if memory is insufficient.
- 2-str_concat.c: Concatenates two strings. __Prototype: char *str_concat(char *s1, char *s2);__. The returned pointer points to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated, if __NULL__ is passed, it is treated as an empty string. The function returns __NULL__ on failure.
- __3-alloc_grid.c__: Returns a pointer to a 2 dimensional array of integers.
__Prototype: int **alloc_grid(int width, int height);__. Each element of the grid should be initialized to __0__. The function returns __NULL__ on failure. If width or height is __0__ or negative, return __NULL__.
- __4-free_grid.c__: Frees a 2 dimensional grid previously created by your alloc_grid function. __Prototype: void free_grid(int **grid, int height);__. It compiles with the alloc_grid.c file.
- __5-argstostr.c__: Concatenates all the arguments of the program. __Prototype: char *argstostr(int ac, char **av);__. Returns __NULL__ if __ac == 0__ or __av == NULL__, returns a pointer to a new string, or __NULL__ if it fails, each argument is followed by a __\n__ in the new string.
- __100-strtow.c__: Splits a string into words. __Prototype: char **strtow(char *str);__.
The function returns a pointer to an array of strings (words), each element of this array contains a single word, null-terminated. The last element of the returned array is __NULL__,
words are separated by spaces, returns NULL if __str == NULL__ or __str == ""__. If your function fails, it should return __NULL__.