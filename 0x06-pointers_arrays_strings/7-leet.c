#include "holberton.h"

/**
 * *leet - entry point
 *
 * @c: char argument
 *
 * Description: Converts string to leet
 *
 * Return: Converted string
 */

char *leet(char *c)
{
int i, j;
char loc[] = {'a', 'e', 'o', 't', 'l'};
char upc[] = {'A', 'E', 'O', 'T', 'L'};
char leet[] = {'4', '3', '0', '7', '1'};
for (i = 0; c[i] != '\0'; i++)
{
for (j = 0; j < 5; j++)
{
if (c[i] == loc[j] || c[i] == upc[j])
{
c[i] = leet[j];
}
}
}
return (c);
}
