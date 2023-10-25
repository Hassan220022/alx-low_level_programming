#include "main.h"
/**
* is_prime_helper - helper function for is_prime_number
* @n: number to check for primality
* @i: iterator
* Return: 1 if n is prime, 0 otherwise
*/
int is_prime_helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (i == n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, i + 1));
	}
}

/**
* is_prime_number - checks if a number is prime
* @n: number to check for primality
* Return: 1 if n is prime, 0 otherwise
*/
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
