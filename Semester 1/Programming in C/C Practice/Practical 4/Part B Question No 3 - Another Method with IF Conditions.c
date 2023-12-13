/*Create a text-based, menu-driven program that allows the user to choose whether to calculate the circumference of a circle, the area of a circle or the volume of a sphere. The program should then input a radius from the user, perform the appropriate calculation and display the result. */

#include<stdio.h>
int main()
{
    int choice;
float circum=0,radius=0,area=0,volume=0;


printf("1- Calculate Circumference of a Circle\n2- Calculate area of a Circle\n3- Calculate Volume of a Sphere\n");

printf("Please Select the Option You Want to Perform:  ");
scanf("%d", &choice);

printf("Please Enter the Radius: ");
scanf("%f", &radius);

if(choice==1)
{
    circum=2*3.14*radius;
    printf("The Circumference is: %f ", circum);

}

else if(choice==2)
{
    area=3.14*radius*radius;
    printf("The Area is %f ", area);
}

else if(choice==3)
{
    volume=(4/3)*3.14*radius*radius*radius;
    printf("The Volume of the Sphere is: %f ", volume);
}

}


