#include <stdio.h>

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
printf(", %2d", product);
}
printf("\n");
}
}
