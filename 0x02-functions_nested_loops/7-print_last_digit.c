#include "main.h"
/**
 *main- print_last_digit
 *Return: Always 0
 */

int print_last_digit(int n)
{
int last;
last = n % 10;
if (last < 0)
last = last * -1;
_putchar(last + '0');
return (last);
}
