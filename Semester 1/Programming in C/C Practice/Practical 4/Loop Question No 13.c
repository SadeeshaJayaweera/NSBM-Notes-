#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int num = 0,sum = 0;
while(num != -1)
{
printf("Enter a number: ");
scanf("%d",&num);
if(num != -1)
sum += num;
}
printf("The sum is %d",sum);
return 0;
}
