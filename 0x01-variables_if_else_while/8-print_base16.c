#include<stdio.h>
/**
 * main - prints base numbers in lowercase
 * Return: Always 0
 */
int main(void)
{
int num;
char la;
for (num = 0; num < 10; num++)
putchar((num % 10) + 'o');
for (la = 'a'; la <= 'f'; la++)
putchar(la);
putchar('\n');
return (0);
}
