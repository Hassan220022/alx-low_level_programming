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

for (n = 'z'; n >= 'a'; n--)
{
putchar(n);
}
putchar('\n');

return (0);
}
