#include "3-calc.h"

/**
 * op_add - entry point
 *
 * @a: int argument
 * @b: int argument
 *
 * Description: Sums a and b
 *
 * Return: result
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - entry point
 *
 * @a: int argument
 * @b: int argument
 *
 * Description: Subtracts b form a
 *
 * Return: result
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - enrty point
 *
 * @a: multp 1
 * @b: multp 2
 *
 * Description: Multiplies a by b
 *
 * Return: result
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - entry point
 *
 * @a: int argument
 * @b: int argument
 *
 * Description: Divides a by b
 *
 * Return: result
 */

int op_div(int a, int b)
{
if (b)
{
return (a / b);
}
printf("Error\n");
exit(100);
}

/**
 * op_mod - entry point
 *
 * @a: int argument
 * @b: int argument
 *
 * Description: Finds the modulo of two integers
 *
 * Return: result
 */

int op_mod(int a, int b)
{
if (b)
{
return (a % b);
}
printf("Error\n");
exit(100);
}
