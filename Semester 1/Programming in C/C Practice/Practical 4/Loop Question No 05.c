#include <stdio.h>
#include <stdlib.h>
int main()
{
int rem = 0;
int number;
int reversed = 0;
printf("Enter a number: ");
scanf("%d", &number);
while(number != 0)
{
rem = number % 10;
reversed = reversed * 10 + rem;
number /= 10;
}
printf("The reversed numbers is %d", reversed);
}
