#include <stdio.h>

int main(void)
{
int long first = 0, second = 1, sum = 0;
int i;

for (i = 0; i < 98; i++)
{
sum = first + second;
first = second;
second = sum;
if (i != 98)
printf("%ld, ", sum);
else
printf("%ld\n", sum);
}
return 0;
}