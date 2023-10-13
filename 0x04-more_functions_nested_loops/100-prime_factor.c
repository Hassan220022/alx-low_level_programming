#include <stdio.h>

/**
 * main - entry point
 * Description: Prints the largest prime factor of the number 612852475143
 * Return: 0
 */
int main(void)
{
     long int n;
     int i;

     n = 612852475143;
     while (n % 2 == 0)
     {
          n /= 2;
     }

     for (i = 3; i <= n; i += 2)
     {
          while (n % i == 0 && n != i)
          {
               n /= i;
          }
     }

     printf("%ld\n", n);

     return 0;
}
