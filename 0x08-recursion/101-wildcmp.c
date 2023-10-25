#include "main.h"
/**
* wildcmp - compares two strings and returns 1 if the strings can be
* @s1: first string to compare
* @s2: second string to compare (may contain wildcard *)
* Return: 1 if s1 and s2 can be considered identical, 0 otherwise
*/
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}
		else if (*s1 == '\0')
		{
			return (0);
		}
		else
		{
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
		}
	}
	else if (*s1 == '\0' || *s2 == '\0')
	{
		return (*s1 == *s2);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
