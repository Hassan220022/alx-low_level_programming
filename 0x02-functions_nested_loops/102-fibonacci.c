#include <stdio.h>
#include "main.h"

/**
 * main - Prints the sum of all even Fibonacci numbers up to 4,000,000.
 *
 * Return: Always 0.
 */
int main(void)
{
int long first = 0, second = 1, sum = 0;
int i;
for (i = 0; i<50;i++)
{
sum = first + second;
first = second;
second = sum;
if (i != 50)
printf("%d, ", sum);
else
printf("%d\n", sum);
}
return (0);
}
