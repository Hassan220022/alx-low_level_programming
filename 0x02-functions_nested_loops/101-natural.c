#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 or 5 below 1024.
 *
 * Return: Always 0.
 */
int main() 
{
int limit = 1024;
int sum = 0;

for (int i = 0; i < limit; i++) {
if (i % 3 == 0 || i % 5 == 0) 
{
sum += i;
}
}
printf("The sum of all multiples of 3 or 5 below 1024 is: %d\n", sum);
return 0;
}
