#include "main.h"
/**
* sqrt_helper - helper function for _sqrt_recursion
* @n: number to find square root of
* @i: iterator
* Return: square root of n
*/
int sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, i + 1));
	}
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number to find square root of
* Return: square root of n
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, 0));
	}
}
