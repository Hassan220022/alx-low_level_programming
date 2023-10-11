#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
for (int i = 0; i <= 9; i++)
{
for (int j = 0; j <= 9; j++)
{
_putchar((i * j) + '0');
_putchar(',');
_putchar(' ');
}
_putchar('$');
_putchar('\n');
}
}
