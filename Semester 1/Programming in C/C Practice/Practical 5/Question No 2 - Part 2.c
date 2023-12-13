#include<stdio.h>

int main()
{
    int u[10],v[10],w[10];
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
        w[i]= u[i] + v[i];
    }

    printf("Vector Sum of Arrays: ");
    for(i=0;i<10;i++)
    {
        printf("%d ", w[i]);
    }



    return 0;
}
