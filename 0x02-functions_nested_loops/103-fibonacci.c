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
int first = 1, second = 2 ,sum = 0;

while (first <= max)
{
if (first % 2 == 0)
sum += first;
next = first + second;
first = second;
second = next;
}
printf("%d\n", sum);
return (0);
}
