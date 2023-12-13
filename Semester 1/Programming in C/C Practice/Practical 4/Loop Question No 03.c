#include <stdio.h>
#include <stdlib.h>
int main()
{
int number;
int factorial = 1;
printf("Enter number for factorial: ");
scanf("%d", &number);
for(int i = number; i >= 1; i--)
{
factorial *= number;
number--;
}
printf("Factorial %d", factorial);
}
