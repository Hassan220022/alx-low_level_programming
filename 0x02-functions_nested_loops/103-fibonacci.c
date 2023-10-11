#include <stdio.h>
# define max 4000000

/**
 * main - Prints the sum of all even Fibonacci numbers up to 4,000,000.
 *
 * Return: Always 0.
 */
int main(void) 
{
int long sum = 0, first = 1, second = 2;
int i;

for (i = 3; second <= max; i++)
{
if (second % 2 == 0)
sum = first + second;
first = second;
second = sum;
}
printf("%ld\n", sum);
return (0);
}
