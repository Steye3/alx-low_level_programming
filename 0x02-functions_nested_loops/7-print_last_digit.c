#include "main.h"
/**
 *main- print_last_digit
 *Return: Always 0
 */

int print_last_digit(int r)
{
int ld = r % 10;

if (ld < 0)
{
ld *= -1;
_putchar(ld + '0');
}
return (0);
}
