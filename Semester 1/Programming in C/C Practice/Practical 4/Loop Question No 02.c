#include <stdio.h>
#include <stdlib.h>

int main()
{
    float number = 0;
    float total = 0;
    float avg = 0;

    printf("Enter 10 marks: ");
    for(int i = 0; i < 10; i++)
    {
        scanf("%f", &number);
        total += number;
    }

    printf("Total: %f\n", total);
    avg = (total / 10.0);
    printf("Average: %f\n", avg);

    if(avg > 50)
        printf("Pass");
    else
        printf("Fail!");

    return 0;
}
