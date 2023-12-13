#include <stdio.h>
#include <stdlib.h>
int main()
{
int base;
int power;
int result = 1;
printf("Enter a base: ");
scanf("%d", &base);
printf("Enter an exponent: ");
scanf("%d", &power);
for(int i = power; i >= 1; i--)
{
result *= base;
}
printf("The result is %d", result);
}
