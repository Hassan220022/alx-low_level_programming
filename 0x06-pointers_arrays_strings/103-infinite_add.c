#include "main.h"
#include "2-strlen.c"
/**
* infinite_add - adds two numbers
* @n1: first number
* @n2: second number
* @r: buffer to store the result
* @size_r: buffer size
*
* Return: pointer to the result, or 0 if the result cannot be stored in r
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, len1 = _strlen(n1), len2 = _strlen(n2), sum, carry = 0;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);

	for (i = len1 - 1, j = len2 - 1, k = 0; i >= 0 || j >= 0 || carry;)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		carry = sum / 10;
		r[k] = sum % 10 + '0';
		i--, j--, k++;
	}

	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		sum = r[i];
		r[i] = r[j];
		r[j] = sum;
	}

	r[k] = '\0';

	return (r);
}
