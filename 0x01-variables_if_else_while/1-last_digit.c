#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry
 * Return: Always 0
 */
int main(void)
{
int n;
int a;

srand(time(0));
n = rand() - RAND - MAX / 2;
a = % 10;

if (n > 5)
{
prinf("last digit of %d is %d and greater than S\n", n, a);
}
else if (a == 0)
{
printf("last digit of %d is %d and is 0 \n", n, a);
}
else
{
printf("last digit of %d is %d and less than 6 and not 0\n", n, a);
}
return (0);

