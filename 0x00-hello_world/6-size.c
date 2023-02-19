#include <stdio.h>

/**
 * main - Print the size for various type on the computer it ic compiled and run onReturn: Always 0.
 */

int main(void)
{ 
	printf("size of a char: %zu byte(s)\n", sizeof(char));

	printf("size of an int: %zu byte(s)\n", sizeof(int));
	
	printf("size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
        printf("size of a float: %zu byte(s)\n", sizeof(float));
        return (0);



}	
