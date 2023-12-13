#include<stdio.h>
int main()
{
    int distance, time, avg;
    printf("Please Enter the Distance and Time: ");
    scanf("%d %d", &distance, &time);

    avg=(distance/time);
    printf("The Average Speed is: %d ms-1", avg);




}
