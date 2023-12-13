#include<stdio.h>
int main()
{
    int elements [10];
    int i;
    int max;


    for(i=0;i<10;i++)
    {
        printf("Please Enter Element %d:  ", i);
        scanf("%d", &elements[i]);
    }

    max = elements[0];

    for(i=1;i<10;i++)
    {
        if(max<elements[i])
        max=elements[i];
    }

    printf("The Maximum is %d ", max);

}
