#include "main.h"
/**
 *main- print_last_digit
 *Return: Always 0
 */

int print_last_digit(int n)
{
int ld = n % 10;

if (ld < 0)
{
_putchar(-ld + 48);
return (-ld);
}
else
{
_putchar(-ld + 48);


return (ld);
}
}
