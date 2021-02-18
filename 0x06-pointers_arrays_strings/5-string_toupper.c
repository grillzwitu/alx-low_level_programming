# include "holberton.h"

/**
 * *string_toupper - entry point
 *
 * @str: char argument
 *
 * Description: Converts a lowercase charcter
 * to uppercase
 *
 * Return: Converted character
 */

char *string_toupper(char *str)
{
int i;
i = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}

}
return (str);
}
