#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n"; /* Alphabet + newline */
char *ptr = alphabet;

while (*ptr) /* Loop through the string */
{
_putchar(*ptr); /* Print each character */
ptr++; /* Move to next character */
}
}
