#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * 
 * Description: Generates random valid passwords for the program 101-crackme
 * 
 * Return: 0
 */

int main(void)
{
int num;
srand(time(0));
num = rand();
printf("%i\n",num);
return (0);
}
