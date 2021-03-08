# include <stdio.h>
# include <stdlib.h>


/**
 * main - entry point
 *
 * Description: Prints the name of the file
 * it was compiled from
 *
 * Return: 0 (Success)
 */

int main(void)
{
char name[] = __FILE__;

printf("%s", name);

return (EXIT_SUCCESS);
}
