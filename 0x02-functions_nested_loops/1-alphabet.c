#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char c;
for (char i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
}
int main()
{
print_alphabet();
return (0);
}