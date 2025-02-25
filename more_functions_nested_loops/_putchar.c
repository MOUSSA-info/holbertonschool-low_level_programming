#include "main.h"
#include <unistd.h>

/**
 * _putchar - écrit le caractère c sur stdout
 * @c: Le caractère à imprimer
 *
 * Retourne : En cas de succès 1, en cas d'erreur -1.
 */
void _putchar(char c)
{
    write(1, &c, 1);  // Cette ligne écrit le caractère dans le terminal
}

