#include<stdio.h>
int main()
{
    float c,f;
    printf("Please Enter the Farenheit Value: ");
    scanf("%f", &f);
    c=(f-32)*5/9;
    printf("The Celcius Value of Farenheit is: %f", c);
}
