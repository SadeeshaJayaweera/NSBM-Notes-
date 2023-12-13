#include <stdio.h>
#include <stdlib.h>
int main()
{
int employeeNo;
int hours;
float overTime;
int total = 0;
int totalOT = 0;
while(1)
{
overTime =0;
printf("Enter employee number: ");
scanf("%d",&employeeNo);
if(employeeNo == -999)
break;
printf("Enter hours worked: ");
scanf("%d", &hours);
total++;
if(hours > 0 && hours < 40)
overTime += (hours * 150);
if(hours >= 40)
{
overTime += (39 * 150);
overTime += (hours - 39) * 200;
}
if(overTime > 4000)
totalOT++;
printf("Employee number: %d\n",employeeNo);
printf("Over time payment: %f\n", overTime);
printf("The percentage of people over R.s 4000 of overtime %f%%\n", (float)totalOT/total);
return(0);
}

}
