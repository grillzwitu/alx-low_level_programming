# include "holberton.h"

/**
 * *cap_string - entry point
 *
 * @str: char argument
 *
 * Description: Capitalizes words
 *
 * Return: Capitalized word
 */

char *cap_string(char *str)
{
int i, j;
char sep[] = {32, '\t', 11, '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
i = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
for (j = 0; j < 14; j++)
{
if (str[i - 1] == sep[j])
{
str[i] -= 32;
break;
}
}

}

}
return (str);
}
