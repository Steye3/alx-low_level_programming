#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers passed as agument and
* prints to the screen
* @argc: argument counter
* @argv: argument vector
* Returns: 0 for success and 1 for error
*/

int main(int argc, char **argv)
{
	int num1, num2, result;

	(void) argc;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
	}
	return 0;
}
