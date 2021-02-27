#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * @argc: int argument(count)
 * @argv: char argument(vector)
 *
 * Description: Sums the arguments passed into it
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
int a, b, sum;

if (argc == 1)
{
printf("0\n");
return(0);
}

for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b] != '\0'; b++)
{
if (!isdigit(argv[a][b]))
{
printf("Error\n");
return (1);
}
}

sum += atoi(argv[a]);
}

printf("%d\n",sum);
return (0);
}
