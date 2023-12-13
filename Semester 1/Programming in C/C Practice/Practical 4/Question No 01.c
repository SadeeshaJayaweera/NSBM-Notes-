#include<stdio.h>
int main()
{
    int i,positive=0,negative=0,zero=0,num;

    for(i=0;i<10;i++)
    {
        printf("Please Enter Number %d: ", i+1);
        scanf("%d", &num);

        if(num>0)
        {
            positive++;

        }

        else if(num<0)
        {
            negative++;
        }

        else
        {
            zero++;
        }

    }

    printf("Numbe of Positive are: %d Negative are: %d and Zeroes %d ", positive,negative,zero);
}
