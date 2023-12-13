#include <stdio.h>
#include <stdlib.h>
int main()
{
int first = 0,second = 1,n,i,next = 0;
printf("How many fibonacchi numbers do you want: ");
scanf("%d", &n);
for(i = 0 ; i < n; i++)
{
if(i == 0 || i == 1)
printf("%d\n", i);
else
{
next = first + second;
first = second;
second = next;
printf("%d\n", next);
}
}
}
