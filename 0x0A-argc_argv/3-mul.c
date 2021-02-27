#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: int argument(count)
 * @argv: char argument(vector)
 *
 * Description: Multiplies the arguments passed into it
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
int prod, arg1, arg2;

if (argc != 3)
{
printf("Error\n");
return (1);
}

arg1 = atoi(argv[1]);
arg2 = atoi(argv[2]);

prod = arg1 *arg2;
printf("%d\n", prod);


return (0);
}
