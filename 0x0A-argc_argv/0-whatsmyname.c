#include <stdio.h>
#include "main.h"

/**
* main - the main entry point to the program
* @argc: argument counter
* @argv: argument vector
* Return: Always 0
*/

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i != argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
