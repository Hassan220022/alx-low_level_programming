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
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'q' || ch == 'e')
continue;
putchar(ch);
}
putchar('\n');

return (0);
}
