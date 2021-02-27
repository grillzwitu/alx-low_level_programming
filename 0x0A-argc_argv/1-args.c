#include "holberton.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: int argument(count)
 * @argv: char argument(vector)
 *
 * Description: Prints the number of arguments passed into it
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
int count;
(void)*argv;
count = argc - 1;

printf("%d\n", count);
return (0);
}
