#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This function prints the lowercase alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int m;
for (m = 0; m <= 9; m++)
{
putchar(m + '0');
if (m != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
