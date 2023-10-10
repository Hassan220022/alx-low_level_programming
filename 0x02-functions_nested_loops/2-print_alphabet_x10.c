#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet ten times followed by new lines.
 */
void print_alphabet_x10(void)
{
   for (int i = 0; i < 10; i++)
   {
      print_alphabet();
      _putchar('\n');
   }
}
