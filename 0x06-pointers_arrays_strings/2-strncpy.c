#include "main.h"

/**
* _strncpy - copies a string.
* @dest: passes a string to the function
* @src: passes another string to be coppied to the
* previous string
* @n: size of src
*
* Discription: This function copies the string pointed
* by src, including the terminating null byte, to the
* buffer pointed by dest.
* Return: a pointer to the resulting string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/*concatenate source to destination*/
	for (i = 0; i < n && src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

