#include<stdio.h>
int main()
{
    int ele [10];
    int i;
    float sum=0;

    for(i=0;i<10;i++)
    {
        printf("Please Enter an Element%d:  ", i+1);
        scanf("%d", &ele[i]);

        sum=sum+ele[i];

    }



    printf("The Scaler Sum  is: %f ", sum);
}
