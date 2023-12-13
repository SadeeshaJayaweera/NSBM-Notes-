#include<stdio.h>
int main()
{
    int byear, age ;
    char sname [20];
    printf("Enter your Birth Year: ");
    scanf("%d", &byear);
    printf ("Enter your Name:  ");
    scanf("%s", &sname);
    age = 2022-byear;
    printf("The Student Name is %s and Age is %d", sname, age);

}
