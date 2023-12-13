#include <stdio.h>

int main() {
    int num1, num2, operation;

    printf("1- Subtract\n2- Add\n3- Multiply\n4- Divide\n");

    printf("Please Enter the Operation: ");
    scanf("%d", &operation);

    printf("Please Enter the Number 1: ");
    scanf("%d", &num1);

    printf("Please Enter the Number 2: ");
    scanf("%d", &num2);

    if(operation==1)
    {
        printf("%d - %d = %d", num1,num2, num1-num2);
    }

    else if(operation==2)
    {
        printf("%d + %d = %d ",num1, num2, num1+num2);
    }

    else if(operation==3)
    {
        printf("%d * %d = %d ", num1, num2, num1*num2);
    }

    else
    {
        printf("%d / %d = %d ", num1,num2, num1/num2);
    }

    return 0;
}
