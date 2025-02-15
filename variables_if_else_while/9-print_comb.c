#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers.
 *              Numbers are separated by ", " and are in ascending order.
 *              Uses only putchar (maximum 4 fois).
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;

for (num = 0; num <= 9; num++)
{
putchar(num + '0'); /* Affiche le chiffre */
if (num != 9) /* Vérifie si ce n'est pas le dernier chiffre */
{
putchar(','); /* Affiche la virgule */
putchar(' '); /* Affiche l'espace */
}
}

putchar('\n'); /* Nouvelle ligne */
return (0);
}
