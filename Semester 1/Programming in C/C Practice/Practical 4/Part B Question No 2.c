#include <stdio.h>
#include <stdlib.h>
int main()
{
int num,a,b;
float avg;
printf("Enter a operator number: \n");
printf("1- +\n2- -\n3- /\n4- *\n");
scanf("%d", &num);
printf("Enter two numbers ");
scanf("%d %d", &a,&b);
avg = (float)a/b;
switch(num)
{
case 1:printf("%d + %d = %d",a,b, a+b);break;
case 2:printf("%d - %d = %d",a,b, a-b);break;
case 3:printf("%d/%d = %f",a,b,avg);break;
case 4:printf("%d*%d = %d",a,b,a*b);break;
}
}
