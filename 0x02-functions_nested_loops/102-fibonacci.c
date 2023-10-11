#include <stdio.h>
#include "main.h"

/**
 * main - Prints the sum of all even Fibonacci numbers up to 4,000,000.
 *
 * Return: Always 0.
 */
int main(void)
{
int sum = 0;
int first = 0, second = 1;
int i;
for (i = 0; i<50;i++)
{
sum = first + second;
first = second;
second = sum;
printf("%d, ", sum);
}
return (0);
}
