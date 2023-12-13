#include <stdio.h>
#include <stdlib.h>
int main()
{
float basic_salary,sales,years=0,newsalary,sale1=0,sale2=0,sale3=0,city_value=0,year_value=0;
 char city;

printf("enter basic salary ");
scanf("%f",&basic_salary);
printf("enter sales ");
scanf("%f",&sales);
printf("enter service years ");
scanf("%f",&years);
printf("enter city ");
scanf("%s",&city);
if(years>5)
{
year_value = basic_salary * 0.1;
 }
switch (city)
{
case 'c':
city_value = 2500;
break;

 }

if(sales<=25000)
 {
 sale1 = basic_salary * 0.1;
 }
 if(sales>25000 && sales<=50000)
 {
  sale2 = basic_salary * 0.12;
  }
  if(sales>50000)
  {
  sale3 = basic_salary * 0.15;
  }

  newsalary = basic_salary +city_value+year_value+sale1+sale2+sale3;
  printf("new salary is %.2f",newsalary);

  return 0;
}
