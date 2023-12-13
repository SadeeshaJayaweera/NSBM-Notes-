#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int i,num,n = 0,rem,result = 0,original;
printf("Enter a number: ");
scanf("%d",&num);
original = num;
while(num != 0)
{
num /= 10;
n++;
}
num = original;
for(i = 0; i < n; i ++)
{
rem = num % 10;
rem = round(pow(rem,n));
result += rem;
num /= 10;
}
if(result == original)
printf("This is an Armstrong number");
else
printf("Not an Armstrong number");
return 0;
}
