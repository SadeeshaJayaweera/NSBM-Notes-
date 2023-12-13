#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int num,i;
printf("Enter a number: ");
scanf("%d",&num);
for(i = 2; i < num /2; i++)
{
if(num % i == 0)
{
printf("This is not a prime");
return 0;
}
}
printf("This is a prime");
return 0;
}
