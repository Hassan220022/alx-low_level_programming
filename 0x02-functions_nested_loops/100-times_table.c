#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number for which to print the times table.
 */
void print_times_table(int n)
{
int i, j;

if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int result = i * j;
printf("%d", result);

if (j < n)
{
printf(", ");
if (result < 10)
printf(" ");
}
else
{
printf("\n");
}
}
}
}
}