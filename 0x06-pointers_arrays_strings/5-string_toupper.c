#include "main.h"

/**
*string_toupper - a function that changes all lowercase
*letters of a string to uppercase
*@n: parameter for passing an array
*
*Return: n
*/

char *string_toupper(char *n)
{
int i;

for (i = 0; n[i]; i++)
{
if (n[i] >= 97 && n[i] <= 122)
n[i] -= 32;
}
return (n);
}
