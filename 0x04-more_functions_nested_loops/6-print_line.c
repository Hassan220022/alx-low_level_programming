#include "main.h"

/**
 * print_line - Print a line of '_' characters.
 * @n: The number of times the character '_' should be printed.
 */
void print_line(int n)
{
     if (n <= 0) 
     {
          /* If n is 0 or less, print only a newline character */
          _putchar('\n');
     } else {
          int i;
          for (i = 0; i < n; i++) 
          {
               _putchar('_');
          }
          _putchar('\n');
     }
}
