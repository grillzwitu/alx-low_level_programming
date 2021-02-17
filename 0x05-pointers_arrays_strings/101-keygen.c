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
int count, sum, n;
int pass[100];

sum = 0;

srand(time(NULL));

for (count = 0; count < 100; count++)
{
pass[count] = rand() % 78;
sum += (pass[count] + '0');
putchar(pass[count] + '0');
if ((2772 - sum) - '0' < 78)
{
n = 2772 - sum - '0';
sum += n;
putchar(n + '0');
break;
}
}

return (0);
}
