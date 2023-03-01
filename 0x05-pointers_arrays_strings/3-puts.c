#include "main.h"

/**
* _puts - prints a string in stdout
* @str: string to print
*
* Return: void
*/
void _puts(char *str)
{

while (*str != "\0")
{
putchar(*str++);

}
putchar('\n');
}
