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
	float f;

printf("Size of a char : %d", sizeof(char));
printf("Size of a int : %d", sizeof(int));
printf("Size of a long int : %d", sizeof(long int));
printf("Size of a long long int : %d", sizeof(long long int));
printf("Size of a float : %d", sizeof(float));
return (0);



}
