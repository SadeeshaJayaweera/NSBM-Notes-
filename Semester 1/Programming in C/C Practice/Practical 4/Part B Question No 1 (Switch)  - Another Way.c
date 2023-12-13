#include<stdio.h>
int main()
{
    int number;

    printf("Please Enter a Number:  ");
    scanf("%d", &number);

    switch(number%2)
    {
        case 0:
        printf("The Number is Even");
        break;

        case 1:
        printf("The Number is Odd");
        break;

        default:
        printf("Invalid Fuction ");

    }





}
