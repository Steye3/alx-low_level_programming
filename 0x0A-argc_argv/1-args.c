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
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
