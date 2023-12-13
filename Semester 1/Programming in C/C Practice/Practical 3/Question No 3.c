#include<stdio.h>
int main()
{
    int basic,incre;
    char empname [100];

    printf("Please Enter Your Name: ");
    scanf("%s", &empname);

    printf("Please Enter your Basic Salary: ");
    scanf("%d", &basic);

    if(basic < 5000)
        incre= (basic *0.05)+basic;

    else if(basic >= 5000 < 10000)
        incre= (basic *0.10)+basic;

    else if(basic >= 10000)
        incre= (basic *0.1)+basic;

    printf("The Name: %s and New Salary is %d ", empname, incre);








}
