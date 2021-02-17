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
int size, pass;
size = 0;

srand(time(NULL));
while (size < 20)
{
pass = (rand() % 100) + 5;
if (pass >= 32 && pass <= 126)
{
printf("%c", (char)pass);
}
else
{
printf("%d", pass % 10);
}
size++;
}
printf("\n");
return (0);
}
