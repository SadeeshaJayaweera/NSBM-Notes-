#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
int main()
{
float radius;
int num;
printf("1-Calculate circumference\n2-Calculate circle area\n3-Calculate sphere volume\n");
scanf("%d",&num);
printf("Enter radius: ");
scanf("%f", &radius);
switch(num)
{
case 1:printf("Circumference of circle is %f", 2 * PI * radius);break;
case 2:printf("Area of circle is %f", PI * radius * radius);break;
case 3:printf("Volume of sphere is %f", (4 * PI * radius * radius * radius)/3);break;
}
}
