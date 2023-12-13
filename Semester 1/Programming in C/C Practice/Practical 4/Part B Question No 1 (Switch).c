#include <stdio.h>
#include <stdlib.h>
int main()
{
int number,rem;
printf("Enter a number: ");
scanf("%d",&number);
rem = (number % 2);
switch(rem)
{
case 1:printf("The number is odd");break;
case 0:printf("The number is even");break;
default: printf("Invalid input");
}
}
