# include "holberton.h"

/**
 * main - entry point
 *
 * @argc: int argument
 * @argv: int argument
 *
 * Description: Multiplies two positive numbers.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
unsigned int mul;
int a, b;

if (argc != 3)
{
printf("Error\n");
exit(98);
}
for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b] != '\0'; b++)
{
if (argv[a][b] > 57 || argv[a][b] < 48)
{
printf("Error\n");
exit(98);
}
}

}

mul = atoi(argv[1]) *  atoi(argv[2]);

printf("%d\n", mul);

return (0);
}
