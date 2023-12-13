#include<stdio.h>
int sum(int a, int b)
{
    int sum=0;
    sum=(a+b);
    return sum;
}

int difference(int a, int b)
{
    int difference=0;
    difference=(a-b);
    return difference;
}

int main()
{
    int x, y;
    printf("Please Enter two numbers: ");
    scanf("%d%d", &x,&y);

    printf("Sum is %d and Differece is %d ", sum(x,y), difference(x,y));
}
