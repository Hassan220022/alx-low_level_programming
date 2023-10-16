#include "main.h"
#include "2-strlen.c"

/**
* _atoi - Converts a string to an integer.
* @s: The string to be converted.
*
* Return: The converted integer.
*/
int _atoi(char *s)
{
	int sign = 1;

	int num = 0;

	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
		}
		else if (num > 0)
		{
			break;
		}

		i++;
	}

	return (sign * num);
}
