#include<stdio.h>
int main()
{
    float rad,area,circum,dia;
    printf("Please Enter the Radius: ");
    scanf("%f", &rad);

    circum=(2*3.141599*rad);
    area =(rad*3.141599*rad);
    dia =(rad*2);

    printf("The Circumference %lf, Diameter %lf, area %lf", circum, dia, area);






}
