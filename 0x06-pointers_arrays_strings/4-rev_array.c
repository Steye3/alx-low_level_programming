#include "main.h"

/**
* _reverse_array - reverses the content of an array of integers.
* @n: size of src
*/

void reverse_array(int *a, int n)
{
	int start;
	int end;

	start = 0;
	end = n - 1;
	while (start < end)
	{
		int temp;

		temp = a[start];

		a[start] = a[end];
		a[end] = temp;
		start = start + 1;
		end = end - 1;
	}

}
