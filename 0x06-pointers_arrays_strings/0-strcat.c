#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: passes a string to the function
* @src: passes another string to be added to the
* previous string
* Discription: This function concatenates two strings.
* Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int length;

	/* store the length of the destination in length*/
	length = 0;
	while (dest[length] != '\0')
	{
		++length;
	}

	/*concatenate source to destination*/
	for (i = 0; src[i] != '\0'; ++i, ++length)
	{
		dest[length] += src[i];
	}

	/*terminate the destination string*/
	dest[length] = '\0';
	return (dest);
}
