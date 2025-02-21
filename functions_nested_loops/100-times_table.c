#include <unistd.h>

/**
* print_number - Prints an integer using write.
* @n: The integer to print.
*/
void print_number(int n)
{
char buf[12]; /* Buffer pour stocker le nombre (max 11 chiffres + '\0') */
int i = 0;

if (n == 0)
{
write(1, "0", 1);
return;
}

if (n < 0) /* Gérer les nombres négatifs */
{
write(1, "-", 1);
n = -n;
}

while (n > 0) /* Convertir le nombre en chaîne */
{
buf[i++] = (n % 10) + '0';
n /= 10;
}

while (i--) /* Écrire les chiffres dans l'ordre */
write(1, &buf[i], 1);
}

/**
* print_times_table - Prints the n times table, starting from 0.
* @n: The size of the multiplication table.
*/
void print_times_table(int n)
{
int i, j;
char comma_space[] = ", ";

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
if (j > 0)
write(1, comma_space, 2);
print_number(i * j);
}
write(1, "\n", 1);
}
}
