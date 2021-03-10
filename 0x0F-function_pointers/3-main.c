#include "3-calc.h"

/**
 * main - entry point
 *
 * @argc: int argument (argument count)
 * @argv: int argument (array of arguments)
 *
 * Description: Performs simple operations
 * in the format calc num1 operator num2
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
int result;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

result = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", result);

return (0);
}
