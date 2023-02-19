#include <stdio.h>

/**
 * main - Print the size for various type
 *Return: Always 0.(success)
 */

int main(void)

{
	char a;
	int b;
	long int c;
	long long int d;
	float f = 34.67;

printf("Size of a int : %d byte(s)\n", sizeof(int));
printf("Size of a float : %d byte(s)\n", sizeof(float));
printf("Size of a char : %d byte(s)\n", sizeof(char));
printf("Size of a long int : %d byte(s)\n", sizeof(long int));
printf("Size of a long long int : %d byte(s)\n", sizeof(long long int));
return (0);



}
