#include "main.h"

/**
 * print_alphabet - Affiche l'alphabet en minuscules.
 */print_alphabet - suivi d'une nouvelle ligne.
void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);  /* Affiche chaque lettre */
}
_putchar('\n');  /* Affiche un retour à la ligne */
}
