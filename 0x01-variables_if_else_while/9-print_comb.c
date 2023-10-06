#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This function prints the lowercase alphabet.
 *
 */
void main(void)
{
char m;
for (m = 0; m <= 9; m++)
{
putchar(m + '0');
putchar(',');
putchar(' ');
}
putchar('\n');

}
