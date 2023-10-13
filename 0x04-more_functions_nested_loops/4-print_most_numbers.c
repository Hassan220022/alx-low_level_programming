#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be appended to
 * @src: string to append
 * Return: pointer to dest
 */
void print_most_numbers(void)
{
     char c;

     for (c = '0'; c <= '9'; c++)
     {
     if (c != '2' && c != '4')
     {
     _putchar(c);
     }
     }
     _putchar('\n');
}
