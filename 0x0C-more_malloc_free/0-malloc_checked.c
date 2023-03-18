#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - allocate memory
* @b: number of bytes to allocate
* Return: pointer to allocated memory
*/

int *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int*) malloc(sizeof(int) * b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
