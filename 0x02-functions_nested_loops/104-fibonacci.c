#include <stdio.h>
# define Base 10
/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long int a = 1, b = 2, next;
unsigned int divisor = Base;
int i;

printf("%lu, %lu", a, b);
for (i = 3; i <= 92; i++)
{
next = a + b;
printf(", %lu", next);
a = b;
b = next;
}
for(i = 0; i < 6; i++)
{
while ((a + b) / divisor > divisor ) 
{
divisor *= Base;
printf(", %u%u", (a + b) / divisor, (a + b) % divisor);
}
printf("\n");
return (0);
}
