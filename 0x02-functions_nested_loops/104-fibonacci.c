#include <stdio.h>

int main(void)
{
unsigned long long first = 1, second = 2, sum;
int i;

for (i = 2; i < 98; i++)
{
sum = first + second;
first = second;
second = sum;
if (i != 98)
printf("%llu, ", sum);
else
printf("%llu\n", sum);
}
return 0;
}
