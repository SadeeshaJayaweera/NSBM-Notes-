#include <stdio.h>
#include <stdlib.h>
int main()
{
int monthNo;
printf("Enter a month number: ");
scanf("%d", &monthNo);
switch(monthNo)
{
case 1:printf("Month %d has %d days", monthNo, 31);break;
case 2:printf("Month %d has %d days", monthNo, 28);break;
case 3:printf("Month %d has %d days", monthNo, 31);break;
case 4:printf("Month %d has %d days", monthNo, 30);break;
case 5:printf("Month %d has %d days", monthNo, 31);break;
case 6:printf("Month %d has %d days", monthNo, 30);break;
case 7:printf("Month %d has %d days", monthNo, 31);break;
case 8:printf("Month %d has %d days", monthNo, 31);break;
case 9:printf("Month %d has %d days", monthNo, 30);break;
case 10:printf("Month %d has %d days", monthNo, 31);break;
case 11:printf("Month %d has %d days", monthNo, 30);break;
case 12:printf("Month %d has %d days", monthNo, 31);break;
}
}
