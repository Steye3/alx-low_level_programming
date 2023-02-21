#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the cahracter c
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
