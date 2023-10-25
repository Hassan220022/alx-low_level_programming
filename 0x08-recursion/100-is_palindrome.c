#include "main.h"
#include "2-strlen_recursion.c"

/**
* is_palindrome_helper - checks if a string is a palindrome
* @s: string to check
* @i: index
* Return: 1 if palindrome, 0 if not
*/
int is_palindrome_helper(char *s, int i)
{
	int len = _strlen_recursion(s);

	if (i >= len / 2)
	{
		return (1);
	}
	else if (s[i] != s[len - i - 1])
	{
		return (0);
	}
	else
	{
		return (is_palindrome_helper(s, i + 1));
	}
}

/**
* is_palindrome - checks if a string is a palindrome
* @s: string to check
* Return: 1 if palindrome, 0 if not
*/
int is_palindrome(char *s)
{
	return (is_palindrome_helper(s, 0));
}
