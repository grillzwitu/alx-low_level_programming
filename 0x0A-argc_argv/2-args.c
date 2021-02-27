#include "holberton.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: int argument(count)
 * @argv: char argument(vector)
 *
 * Description: Prints all arguments passed into it
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{

int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
