#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be appended to
 * @src: string to append
 * Return: pointer to dest
 */
void more_numbers(void)
{
     char i , j;

     for (i = '0'; i <= '9'; i++)
     {
         for (j = '0'; j <= '14'; j++)
         {
             _putchar(j);
         }
         _putchar('\n');
     }
}
