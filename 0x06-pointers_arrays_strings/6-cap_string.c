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
char sep[14] = " \t\n,;.!?\"(){}";
i = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (i == 0)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
continue;
}
}
if (str[i] >= 'a' && str[i] <= 'z')
{
for (j = 0; sep[j] != '\0'; j++)
{
if (str[i - 1] == sep[j])
{
str[i] -= 32;
}
}

}

}
return (str);
}
