#include<stdio.h>

int main()
{
    float num1, num2 ,tot, avg;
    printf("Enter the Decimal Number 1:");
    scanf("%f", &num1);
    printf("Enter the Decimal Number 2:");
    scanf("%f", &num2);
    tot = num1+num2;
    avg = tot/2 ;
    printf("The Average: %f " , avg);

}
