#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
int random_number;
srand(time(0));
random_number= rand()-RAND_MAX;
if(random_number > 0)
{
printf("%d positive number",random_number);
}
else if(random_number == 0)
{
printf("%d is zero",random_number);
}
else
{
printf("%d is negative number",random_number);
}
return 0;
}