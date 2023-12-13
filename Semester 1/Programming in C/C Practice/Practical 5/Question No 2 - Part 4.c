#include<stdio.h>

int main()
{
    int u[10],v[10],w[10],sp;
    int i,vector_sum;

    for(i=0;i<10;i++)
    {
        printf("Please Enter Element to Array 1 %d: ",i+1 );
        scanf("%d", &u[i]);

        printf("Please Enter Element to Array 2 %d: ", i+1);
        scanf("%d", &v[i]);

        w[i] = u[i] * v[i];
        vector_sum=vector_sum+w[i];

    }

    printf("The Vector Sum is: %d ", vector_sum);

    return 0;
}
