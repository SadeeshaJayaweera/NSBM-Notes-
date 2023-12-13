#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, fah;
    printf("Enter the value in Fahrenheit: ");
    scanf("%f", &fah);

    celsius =  ((fah - 32)*5)/9;

    printf("%f C", celsius);

    return 0;
}
