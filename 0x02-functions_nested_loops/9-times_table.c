#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int i,j,value;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
value = (i * j);
if (j > 9)
{
_putchar(value + '0');
_putchar(',');
_putchar(' ');
}
else if (value >= 10)
{
_putchar((value / 10) + '0');
_putchar((value % 10) + '0');
_putchar(',');
_putchar(' ');
}
else
{
_putchar(' ');
_putchar(value + '0');
}
}
_putchar('\n');
}
}
