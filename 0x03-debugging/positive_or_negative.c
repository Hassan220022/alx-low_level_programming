#include "main.h"

/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */
int positive_or_negative(int value)
{
if (value > 0)
{
printf("%d is positive\n", value);
}
else if (value < 0)
{
printf("%d is negative\n", value);
}
else
{
printf("%d is zero\n", value);
}
return (0);
}
