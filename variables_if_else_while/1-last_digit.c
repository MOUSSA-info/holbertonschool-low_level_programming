#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Assigns a random number to n and prints its last digit,
 * along with a message about its properties.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, last_digit;

srand(time(0));  /* Initialize random seed */
n = rand() - RAND_MAX / 2; /* Generate random number */
last_digit = n % 10; /* Get the last digit */

/* Print the required output */
printf("Last digit of %d is %d ", n, last_digit);

if (last_digit > 5)
printf("and is greater than 5\n");
else if (last_digit == 0)
printf("and is 0\n");
else
printf("and is less than 6 and not 0\n");
return (0);
}
