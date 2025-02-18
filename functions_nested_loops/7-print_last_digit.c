#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to check
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
int last_digit;
last_digit = n % 10;  /* Get the last digit */
if (last_digit < 0)   /* Convert to positive if negative */
last_digit = -last_digit;
_putchar(last_digit + '0');  /* Print the last digit as a character */
return (last_digit);
}
