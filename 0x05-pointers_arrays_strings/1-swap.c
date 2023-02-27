#include "main.h"

/**
* swap_int - swaps the values of two integers.
* @a: holds a value to be swapped
* @b: holds the second value to be swpped
*/

void swap_int(int *a, int *b)
{
	*a = *a - *b;
	*b = *a + *b;
	*a = *b - *a;
}
