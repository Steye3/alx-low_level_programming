#include "main.h"

/**
 *print_alphabet - print all alphabet
 *
 */
void print_alphabet_x10(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter * 10);
_putchar('\n');
}
