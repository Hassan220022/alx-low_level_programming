#include <stdio.h>

/**
 * main - Prints the sum of all even Fibonacci numbers up to 4,000,000.
 *
 * Return: Always 0.
 */
int main(void)
{
int long first = 0, second = 1, sum = 0;
int i;

for (i = 0; i < 50; i++)
{
sum = first + second;
first = second;
second = sum;
if (i != 49)
printf("%ld, ", sum);
else
printf("%ld\n", sum);
}
return (0);
}
