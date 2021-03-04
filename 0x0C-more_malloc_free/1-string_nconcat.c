#include "holberton.h"

/**
 * *string_nconcat - entry point
 *
 * @s1: char argument
 * @s2: char argument
 * @n: int argument
 *
 * Description: Concatenates two strings.
 *
 * Return: Pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat_str;
unsigned int c1, c2, conc_c;

if (s1 == NULL)
c1 = 0;
else
for (c1 = 0; s1[c1]; c1++)
;

if (s2 == NULL)
c2 = 0;
else
for (c2 = 0; s2[c2]; c2++)
;

if (c2 > n)
c2 = n;

concat_str = malloc(sizeof(char) * (c1 + c2 + 1));

if (concat_str == NULL)
return (NULL);

for (conc_c = 0; conc_c < c1; conc_c++)
concat_str[conc_c] = s1[conc_c];

for (conc_c = 0; conc_c < c2; conc_c++)
concat_str[conc_c + c1] = s2[conc_c];

concat_str[c1 + c2] = '\0';

return (concat_str);
}
