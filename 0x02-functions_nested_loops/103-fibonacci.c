#include <stdio.h>
# define max 4000000

/**
 * main - Prints the sum of all even Fibonacci numbers up to 4,000,000.
 *
 * Return: Always 0.
 */
int main(void)
{
int next;
int i;
int first = 1, second = 2, sum = 0;

for (i = first; first <= 98; i++)
{
if (i != 98)
{
next = first + second;
first = second;
second = next;
printf("%d, ", next);
}
else
{
next = first + second;
first = second;
second = next;
printf("%d", next);
}
}

return (0);
}
