#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * coin_count - entry point
 *
 * @cents: int argument
 *
 * Description: Counts the least number of coins to give as change
 *
 * Return: 0 (Success)
 */

int coin_count(int cents)
{
int count;
count = 0;

while (cents >= 25)
{
cents -= 25;
count++;
}
while (cents >= 10)
{
cents -= 10;
count++;
}
while (cents >= 5)
{
cents -= 5;
count++;
}
while (cents >= 2)
{
cents -= 2;
count++;
}
while (cents >= 1)
{
cents -= 1;
count++;
}

printf("%d\n", count);
return (0);
}

/**
 * main - entry point
 *
 * @argc: int argument(count)
 * @argv: char argument(vector)
 *
 * Description: Implements coin count as required
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
int amount;
if (argc != 2)
{
printf("Error\n");
return (1);
}

amount = atoi(argv[1]);
if (amount < 0)
{
printf("0\n");
return (0);
}

coin_count(amount);
return (0);
}
