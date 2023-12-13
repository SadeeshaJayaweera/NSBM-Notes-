#include <stdio.h>
#include <stdlib.h>
int main()
{
int number;
int sum = 0;
printf("Enter a number: ");
scanf("%d", &number);
while(number != 0)
{
sum += (number % 10);
number /= 10;
}
printf("The sum of numbers are %d", sum);
}
