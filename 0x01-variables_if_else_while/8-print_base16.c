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
char n;
int m;
for (m = 0; m <= 9; m++)
{
putchar(m + '0');
}
for (n = 'a'; n <= 'f'; n++)
{
putchar(n);
}
putchar('\n');

return (0);
}
