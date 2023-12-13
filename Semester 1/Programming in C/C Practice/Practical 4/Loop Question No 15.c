#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int numbers[10],i,count = 0;;
for(i = 0; i < 10; i++)
{
printf("Enter %d number: ",i+1);
scanf("%d",&numbers[i]);
if(numbers[i] % 2 == 0)
count++;
}
printf("The number of even numbers in the array are %d\n",count);
return 0;
}
