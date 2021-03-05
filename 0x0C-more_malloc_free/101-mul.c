# include "holberton.h"
# include <string.h>

/**
 * _isdigit - checks for a digit
 * @c: Digit
 * Return: 1 or 0
 */

int _isdigit(int c)
{
return (c >= '0' && c <= '9');
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: the length of the string
 */

int _strlen(char *s)
{
int len = 0;

while (s[len])
len++;

return (len);
}

/**
 * mult - multiply two big number strings
 * @s1: the first big number string
 * @s2: the second big number string
 *
 * Return: the product big number string
 */
char *mult(char *s1, char *s2)
{
char *r;
int l1, l2, a, b, c, x;

l1 = _strlen(s1);
l2 = _strlen(s2);
r = malloc(a = x = l1 + l2);
if (!r)
printf("Error\n"), exit(98);
while (a--)
r[a] = 0;

for (l1--; l1 >= 0; l1--)
{
if (!_isdigit(s1[l1]))
{
free(r);
printf("Error\n"), exit(98);
}
a = s1[l1] - '0';
c = 0;

for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
{
if (!_isdigit(s2[l2]))
{
free(r);
printf("Error\n"), exit(98);
}
b = s2[l2] - '0';

c += r[l1 + l2 + 1] + (a *b);
r[l1 + l2 + 1] = c % 10;

c /= 10;
}
if (c)
r[l1 + l2 + 1] += c;
}
return (r);
}


/**
 * main - multiply two big number strings
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: Always 0 on success.
 */
int main(int argc, char **argv)
{
char *r;
int a, c, x;

if (argc != 3)
printf("Error\n"), exit(98);

x = _strlen(argv[1]) + _strlen(argv[2]);
r = mult(argv[1], argv[2]);
c = 0;
a = 0;
while (c < x)
{
if (r[c])
a = 1;
if (a)
putchar(r[c] + '0');
c++;
}
if (!a)
putchar('0');
putchar('\n');
free(r);
return (0);
}
