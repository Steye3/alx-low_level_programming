#include "main.h"

/**
* _strlen - returns the length of a string.
* @s: memory adrress holder for the variable
*
* Returns: zero
*/

int _strlen(char *s)
{
	int i, n;
	
	i = 0;
	n = 0;

	while (*(s + i) != '\0')
	n = i;
	++i;
	return (n);

}
