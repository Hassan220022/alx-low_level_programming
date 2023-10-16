#include "main.h"
#include "2-strlen.c"

/**
* _atoi - changes a string to an int
* @s: the string to be changed
*
* Return: the converted int
*/
int _atoi(char *s)
{
     int sign = 1;
     unsigned int sum = 0;
     
     while (*s != '\0')
     {
		if (*s == '-')
               sign *= -1;

          else if (*s >= '0' && *s <= '9')
               sum = sum * 10 + (*s - '0');

          else if (sum > 0)
               break;
          s++;
     }
     return (sum * sign);
}
