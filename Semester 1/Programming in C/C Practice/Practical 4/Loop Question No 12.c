#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int num,i;
printf("Enter a number: ");
scanf("%d",&num);
for(i = 1; i <= num ; i++)
{
if(num % i == 0)
printf("%d is a facor of %d\n",i,num);
}
return 0;
}
