#include "main.h"
/**
* _atoi - Converts a string to an integer.
* @s: The string to be converted.
*
* Return: The converted integer.
*/
int _atoi(char *s)
{
	int sign = 1;

	unsigned int num = 0;

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

			if (sign * num > INT_MAX)
			{
				return (INT_MAX);
			}
			else if (sign * num < INT_MIN)
			{
				return (INT_MIN);
			}
		}
		else if (num > 0)
		{
			break;
		}

		i++;
	}

	return (sign * num);
}
