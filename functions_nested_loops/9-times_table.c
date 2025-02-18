#include <stdio.h>

/**
 * times_table - Prints the 9 times table starting from 0.
 */
void times_table(void)
{
int i, j, product;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
product = i * j;
if (j == 0)
printf("%d", product);
else
printf(", %2d", product); /* Format aligné */
}
printf("\n"); /* Nouvelle ligne après chaque ligne */
}
}
/**
 * main - Entry point to test times_table function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
times_table();
return (0);
}
