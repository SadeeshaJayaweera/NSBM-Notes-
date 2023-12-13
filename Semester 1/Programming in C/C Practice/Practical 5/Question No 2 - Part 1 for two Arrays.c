#include<stdio.h>

int main()
{
    int u[10],v[10],sumU=0,sumV=0;
    int i;

    for(i=0;i<10;i++)
    {
        printf("Please Enter Element to Array 1 %d: ",i+1 );
        scanf("%d", &u[i]);

        printf("Please Enter Element to Array 2 %d: ", i+1);
        scanf("%d", &v[i]);

    }

    for(i=0;i<10;i++)
    {
        sumU=sumU+u[i];
        sumV=sumV+v[i];
    }


    printf("Scaler Sum of Array U: %d ", sumU);
    printf("Scaler Sum of Array V: %d ", sumV);

    return 0;
}
