#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: int argument(count)
 * @argv: char argument(vector)
 *
 * Description: Counts the number of coins to give as change
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
int cents, coin_count;

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}

coin_count = 0;

while (cents >= 25)
{
cents -= 25;
coin_count++;
}
while (cents >= 10)
{
cents -= 10;
coin_count++;
}
while (cents >= 5)
{
cents -= 5;
coin_count++;
}
while (cents >= 1)
{
cents -= 1;
coin_count++;
}

printf("%d\n", coin_count);
return (0);
}
